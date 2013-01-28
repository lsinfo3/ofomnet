/*
 * Forwarding.h
 *
 *  Created on: 05.07.2012
 *      Author: rachor
 */

#ifndef FORWARDING_H_
#define FORWARDING_H_


#include "OFA_controller.h"
#include "MACAddress.h"
#include "INETDefs.h"
#include "IPv4Address.h"
#include <algorithm>
#include "IRoutingTable.h"
#include "IInterfaceTable.h"
#include "FlatNetworkConfigurator.h"
#include "InterfaceEntry.h"
#include "IPv4InterfaceData.h"
#include <vector>

class IInterfaceTable;
class IRoutingTable;


class Forwarding: public cSimpleModule, public cListener
{
public:
    Forwarding();
    ~Forwarding();
    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj);

protected:
    virtual void initialize(int stage);

protected:
    struct NodeInfo {
        NodeInfo() {isIPNode=false;ift=NULL;rt=NULL;usesDefaultRoute=false;}
        bool isIPNode;
        bool isOpenFlow;
        IInterfaceTable *ift;
        IRoutingTable *rt;
        IPv4Address address;
        MACAddress macAddress;
        bool usesDefaultRoute;
        int connID;
        std::string name;
        friend std::ostream& operator<<(std::ostream& os, NodeInfo ni)
        {
            os << "Name: " << ni.name <<", MAC: " << ni.macAddress << ", IP: " << ni.address << ", connID: " << ni.connID << endl;
            return os;
        }
    };
    typedef std::vector<NodeInfo> NodeInfoVector;

    virtual void extractTopology(cTopology& topo, NodeInfoVector& nodeInfo);
    virtual void assignAddresses(cTopology& topo, NodeInfoVector& nodeInfo);
    virtual bool processARPPacket(OFP_Packet_In *packet_in, int connID);

    virtual int numInitStages() const  {return 5;}

    simsignal_t connIDSignal;
    simsignal_t PacketInSignalId;

    cTopology topo_forw;
    NodeInfoVector nodeInfo;
    bool isArpOracle;


private:
    OFA_controller *controller;
    typedef std::vector<std::pair<int, uint32_t> > UnsortedMap;
    UnsortedMap connID_outport;

};



#endif /* FORWARDING_H_ */
