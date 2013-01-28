/*
 * OFA_switch.h
 *
 *  Created on: 11.05.2012
 *      Author: rachor
 */

#ifndef OFA_SWITCH_H_
#define OFA_SWITCH_H_

#include <omnetpp.h>
#include <NotificationBoard.h>
#include <Buffer.h>
#include <INotifiable.h>
#include "TCPSocket.h"
#include "openflow.h"
#include "Open_Flow_Message_m.h"
#include "Flow_Table.h"



class OFA_switch: public cSimpleModule, public INotifiable
{
public:
    OFA_switch();
    ~OFA_switch();



protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void receiveChangeNotification(int category, const cPolymorphic *details);
    void handlePacket();
    void sendPacketInMessage(EthernetIIFrame *frame,  uint32_t buffer_id,int numBytes);
    TCPSocket socket;

    void connect();
    void handleTimer(cMessage *msg);
    void handleFeaturesRequestMessage(Open_Flow_Message *of_msg);

    void execute_packet_out_action(ofp_action_header *action, uint32_t buffer_id, uint32_t inport);
    void execute_packet_out_action(ofp_action_header *action, EthernetIIFrame *frame, uint32_t inport);
    void handlePacketOutMessage(Open_Flow_Message *of_msg);
    void handleFlowModMessage(Open_Flow_Message *of_msg);


private:
    Buffer *buffer;
    NotificationBoard *nb;
    cMessage *  timeoutMsg;
    Flow_Table *flow_table;
    double timeout;
};


#endif /* OFA_SWITCH_H_ */
