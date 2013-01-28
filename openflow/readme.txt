Required changes to the INET framework:

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Modify file src/linklayer/ethernet/EtherMACBase

IN

void EtherMACBase::registerInterface()

FROM

    if (ift)
        ift->addInterface(interfaceEntry);

TO

    if (ift && par("doRegisterAtIft").boolValue())
        ift->addInterface(interfaceEntry);

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
		
EtherMAC.ned
EtherMACFullDuplex.ned

new parameter: bool doRegisterAtIft = default(true);

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

src/base/NotifierConsts.h

added

		// layer 3 - OpenFlow
		NF_NO_MATCH_FOUND,
		NF_FLOOD_PACKET,
		NF_SEND_PACKET,
	
src/base/NotifierConstants.cc

added

        case NF_NO_MATCH_FOUND: return "OF-NO-MATCH-Found";
        case NF_FLOOD_PACKET: return "OF-FLOOD-PACKET";
        case NF_SEND_PACKET: return "OF-SEND-PACKET";