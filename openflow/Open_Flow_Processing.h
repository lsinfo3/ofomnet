/*
 * Open_Flow_Processing.h
 *
 *  Created on: 27.07.2012
 *      Author: rachor
 */

#ifndef OPEN_FLOW_PROCESSING_H_
#define OPEN_FLOW_PROCESSING_H_

#include <omnetpp.h>
#include <EtherFrame_m.h>
#include <MACAddress.h>
#include <ARPPacket_m.h>
#include "Flow_Table.h"
#include "Buffer.h"
#include "NotificationBoard.h"
#include "OF_Wrapper.h"
#include "TCPCommand_m.h"
#include "IPv4Datagram.h"
#include <vector>
#include "INotifiable.h"

class Open_Flow_Processing : public cSimpleModule, public INotifiable
{
public:
    void disablePorts(std::vector<int> ports);
    Open_Flow_Processing();
    ~Open_Flow_Processing();

protected:
    Flow_Table *flow_table;
    Buffer *buffer;
    NotificationBoard *nb;

    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void receiveChangeNotification(int category, const cPolymorphic *details);
    void sendPacketOut();
    void processQueuedMsg(cMessage *data_msg);

private:
    EthernetIIFrame *frameBeingReceived;
    std::vector<int> port_vector;

    //        cMessage *event;
    //        cMessage *data_msg;
    bool busy;
    std::list<cMessage *> msg_list;
    double serviceTime;
};


#endif /* OPEN_FLOW_PROCESSING_H_ */
