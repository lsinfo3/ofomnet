#
# OMNeT++/OMNEST Makefile for openflow
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -I../inet_v2/src/networklayer/manetrouting/base -I../inet_v2/src/transport/tcp_common -I../inet_v2/src/networklayer/xmipv6 -I../inet_v2/src/util -I../inet_v2/src/networklayer/autorouting/ipv4 -I../inet_v2/src/networklayer/ipv6 -I../inet_v2/src/battery/models -I../inet_v2/src/util/headerserializers/udp -I../inet_v2/src/linklayer/ethernet -I../inet_v2/src/transport/tcp -I../inet_v2/src/world/radio -I../inet_v2/src/util/headerserializers/ipv4 -I../inet_v2/src/linklayer/radio -I../inet_v2/src/networklayer/ipv4 -I../inet_v2/src/world/powercontrol -I../inet_v2/src/networklayer/icmpv6 -I../inet_v2/src/linklayer/ieee80211/mgmt -I../inet_v2/src/linklayer/contract -I../inet_v2/src/util/headerserializers/tcp -I../inet_v2/src/transport/contract -I../inet_v2/src/networklayer/ipv6tunneling -I../inet_v2/src/transport/udp -I../inet_v2/src/linklayer/ieee80211/mac -I../inet_v2/src/linklayer/radio/propagation -I../inet_v2/src -I../inet_v2/src/transport/tcp/queues -I../inet_v2/src/world/obstacles -I../inet_v2/src/networklayer/contract -I../inet_v2/src/transport/sctp -I../inet_v2/src/util/headerserializers -I../inet_v2/src/networklayer/common -I../inet_v2/src/mobility -I../inet_v2/src/applications/tcpapp -I../inet_v2/src/linklayer/ieee80211/radio -I../inet_v2/src/networklayer/arp -I../inet_v2/src/applications/pingapp -I../inet_v2/src/base -I../inet_v2/src/util/headerserializers/sctp -I../inet_v2/src/linklayer/ieee80211/radio/errormodel -L../inet_v2/out/$(CONFIGNAME)/src -linet -DINET_IMPORT -KINET_V2_PROJ=../inet_v2
#

# Name of target to be created (-o option)
TARGET = openflow$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../inet_v2/src/networklayer/manetrouting/base \
    -I../inet_v2/src/transport/tcp_common \
    -I../inet_v2/src/networklayer/xmipv6 \
    -I../inet_v2/src/util \
    -I../inet_v2/src/networklayer/autorouting/ipv4 \
    -I../inet_v2/src/networklayer/ipv6 \
    -I../inet_v2/src/battery/models \
    -I../inet_v2/src/util/headerserializers/udp \
    -I../inet_v2/src/linklayer/ethernet \
    -I../inet_v2/src/transport/tcp \
    -I../inet_v2/src/world/radio \
    -I../inet_v2/src/util/headerserializers/ipv4 \
    -I../inet_v2/src/linklayer/radio \
    -I../inet_v2/src/networklayer/ipv4 \
    -I../inet_v2/src/world/powercontrol \
    -I../inet_v2/src/networklayer/icmpv6 \
    -I../inet_v2/src/linklayer/ieee80211/mgmt \
    -I../inet_v2/src/linklayer/contract \
    -I../inet_v2/src/util/headerserializers/tcp \
    -I../inet_v2/src/transport/contract \
    -I../inet_v2/src/networklayer/ipv6tunneling \
    -I../inet_v2/src/transport/udp \
    -I../inet_v2/src/linklayer/ieee80211/mac \
    -I../inet_v2/src/linklayer/radio/propagation \
    -I../inet_v2/src \
    -I../inet_v2/src/transport/tcp/queues \
    -I../inet_v2/src/world/obstacles \
    -I../inet_v2/src/networklayer/contract \
    -I../inet_v2/src/transport/sctp \
    -I../inet_v2/src/util/headerserializers \
    -I../inet_v2/src/networklayer/common \
    -I../inet_v2/src/mobility \
    -I../inet_v2/src/applications/tcpapp \
    -I../inet_v2/src/linklayer/ieee80211/radio \
    -I../inet_v2/src/networklayer/arp \
    -I../inet_v2/src/applications/pingapp \
    -I../inet_v2/src/base \
    -I../inet_v2/src/util/headerserializers/sctp \
    -I../inet_v2/src/linklayer/ieee80211/radio/errormodel \
    -I. \
    -Iapps \
    -IctrlApps \
    -Iimages \
    -Imessages \
    -Inodes \
    -Iresults \
    -Iscenarios \
    -Iscenarios/results \
    -Iscenarios/results/szenario_Domains.ini \
    -Iscenarios/results/szenario_Domains_multiController.ini \
    -Iutility

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../inet_v2/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath ../inet_v2/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/Buffer.o \
    $O/Flow_Table.o \
    $O/OFA_controller.o \
    $O/OFA_switch.o \
    $O/OF_Wrapper.o \
    $O/Open_Flow_Processing.o \
    $O/apps/PingAppRandom.o \
    $O/ctrlApps/Forwarding.o \
    $O/ctrlApps/Hub.o \
    $O/ctrlApps/Switch.o \
    $O/utility/kPartitionNetwork.o \
    $O/utility/placeController.o \
    $O/utility/SpanningTree.o \
    $O/messages/OFP_Features_Reply_m.o \
    $O/messages/OFP_Features_Request_m.o \
    $O/messages/OFP_Flow_Mod_m.o \
    $O/messages/OFP_Packet_In_m.o \
    $O/messages/OFP_Packet_Out_m.o \
    $O/messages/Open_Flow_Message_m.o

# Message files
MSGFILES = \
    messages/OFP_Features_Reply.msg \
    messages/OFP_Features_Request.msg \
    messages/OFP_Flow_Mod.msg \
    messages/OFP_Packet_In.msg \
    messages/OFP_Packet_Out.msg \
    messages/Open_Flow_Message.msg

# Other makefile variables (-K)
INET_V2_PROJ=../inet_v2

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppmain$D $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O
	-rm -f openflow openflow.exe libopenflow.so libopenflow.a libopenflow.dll libopenflow.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f apps/*_m.cc apps/*_m.h
	-rm -f ctrlApps/*_m.cc ctrlApps/*_m.h
	-rm -f images/*_m.cc images/*_m.h
	-rm -f messages/*_m.cc messages/*_m.h
	-rm -f nodes/*_m.cc nodes/*_m.h
	-rm -f results/*_m.cc results/*_m.h
	-rm -f scenarios/*_m.cc scenarios/*_m.h
	-rm -f scenarios/results/*_m.cc scenarios/results/*_m.h
	-rm -f scenarios/results/szenario_Domains.ini/*_m.cc scenarios/results/szenario_Domains.ini/*_m.h
	-rm -f scenarios/results/szenario_Domains_multiController.ini/*_m.cc scenarios/results/szenario_Domains_multiController.ini/*_m.h
	-rm -f utility/*_m.cc utility/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc apps/*.cc ctrlApps/*.cc images/*.cc messages/*.cc nodes/*.cc results/*.cc scenarios/*.cc scenarios/results/*.cc scenarios/results/szenario_Domains.ini/*.cc scenarios/results/szenario_Domains_multiController.ini/*.cc utility/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/Buffer.o: Buffer.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	Buffer.h \
	openflow.h
$O/Flow_Table.o: Flow_Table.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/arp/ARPPacket_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	Flow_Table.h \
	openflow.h
$O/OFA_controller.o: OFA_controller.cc \
	$(INET_V2_PROJ)/src/applications/tcpapp/GenericAppMsg_m.h \
	$(INET_V2_PROJ)/src/base/ByteArray.h \
	$(INET_V2_PROJ)/src/base/ByteArray_m.h \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/base/INotifiable.h \
	$(INET_V2_PROJ)/src/base/ModuleAccess.h \
	$(INET_V2_PROJ)/src/base/NotificationBoard.h \
	$(INET_V2_PROJ)/src/base/NotifierConsts.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
	$(INET_V2_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_V2_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_V2_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_V2_PROJ)/src/transport/tcp/TCP.h \
	$(INET_V2_PROJ)/src/transport/tcp/TCPConnection.h \
	$(INET_V2_PROJ)/src/transport/tcp_common/TCPSegment.h \
	$(INET_V2_PROJ)/src/transport/tcp_common/TCPSegment_m.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	OFA_controller.h \
	OF_Wrapper.h \
	ctrlApps/Forwarding.h \
	ctrlApps/Hub.h \
	ctrlApps/Switch.h \
	messages/OFP_Features_Reply_m.h \
	messages/OFP_Features_Request_m.h \
	messages/OFP_Flow_Mod_m.h \
	messages/OFP_Packet_In_m.h \
	messages/OFP_Packet_Out_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/OFA_switch.o: OFA_switch.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/base/INotifiable.h \
	$(INET_V2_PROJ)/src/base/ModuleAccess.h \
	$(INET_V2_PROJ)/src/base/NotificationBoard.h \
	$(INET_V2_PROJ)/src/base/NotifierConsts.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/arp/ARPPacket_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddressResolver.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	Buffer.h \
	Flow_Table.h \
	OFA_switch.h \
	OF_Wrapper.h \
	messages/OFP_Features_Reply_m.h \
	messages/OFP_Flow_Mod_m.h \
	messages/OFP_Packet_In_m.h \
	messages/OFP_Packet_Out_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/OF_Wrapper.o: OF_Wrapper.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	OF_Wrapper.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/Open_Flow_Processing.o: Open_Flow_Processing.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/base/INotifiable.h \
	$(INET_V2_PROJ)/src/base/ModuleAccess.h \
	$(INET_V2_PROJ)/src/base/NotificationBoard.h \
	$(INET_V2_PROJ)/src/base/NotifierConsts.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/arp/ARPPacket_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	Buffer.h \
	Flow_Table.h \
	OF_Wrapper.h \
	Open_Flow_Processing.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/apps/PingAppRandom.o: apps/PingAppRandom.cc \
	$(INET_V2_PROJ)/src/applications/pingapp/PingPayload_m.h \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddressResolver.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	apps/PingAppRandom.h
$O/ctrlApps/Forwarding.o: ctrlApps/Forwarding.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/base/INotifiable.h \
	$(INET_V2_PROJ)/src/base/IPassiveQueue.h \
	$(INET_V2_PROJ)/src/base/ModuleAccess.h \
	$(INET_V2_PROJ)/src/base/NotificationBoard.h \
	$(INET_V2_PROJ)/src/base/NotifierConsts.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherMAC.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherMACBase.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/arp/ARPPacket_m.h \
	$(INET_V2_PROJ)/src/networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
	$(INET_V2_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_V2_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_V2_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddressResolver.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	OFA_controller.h \
	OF_Wrapper.h \
	ctrlApps/Forwarding.h \
	messages/OFP_Packet_In_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/ctrlApps/Hub.o: ctrlApps/Hub.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	OFA_controller.h \
	OF_Wrapper.h \
	ctrlApps/Hub.h \
	messages/OFP_Packet_In_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/ctrlApps/Switch.o: ctrlApps/Switch.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPSocket.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	OFA_controller.h \
	OF_Wrapper.h \
	ctrlApps/Switch.h \
	messages/OFP_Packet_In_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/messages/OFP_Features_Reply_m.o: messages/OFP_Features_Reply_m.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	messages/OFP_Features_Reply_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/messages/OFP_Features_Request_m.o: messages/OFP_Features_Request_m.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	messages/OFP_Features_Request_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/messages/OFP_Flow_Mod_m.o: messages/OFP_Flow_Mod_m.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	messages/OFP_Flow_Mod_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/messages/OFP_Packet_In_m.o: messages/OFP_Packet_In_m.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	messages/OFP_Packet_In_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/messages/OFP_Packet_Out_m.o: messages/OFP_Packet_Out_m.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	messages/OFP_Packet_Out_m.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/messages/Open_Flow_Message_m.o: messages/Open_Flow_Message_m.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	messages/Open_Flow_Message_m.h \
	openflow.h
$O/utility/SpanningTree.o: utility/SpanningTree.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/base/INotifiable.h \
	$(INET_V2_PROJ)/src/base/ModuleAccess.h \
	$(INET_V2_PROJ)/src/base/NotificationBoard.h \
	$(INET_V2_PROJ)/src/base/NotifierConsts.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/arp/ARPPacket_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	Buffer.h \
	Flow_Table.h \
	OF_Wrapper.h \
	Open_Flow_Processing.h \
	messages/Open_Flow_Message_m.h \
	openflow.h \
	utility/SpanningTree.h
$O/utility/kPartitionNetwork.o: utility/kPartitionNetwork.cc \
	utility/kPartitionNetwork.h
$O/utility/placeController.o: utility/placeController.cc \
	$(INET_V2_PROJ)/src/base/INETDefs.h \
	$(INET_V2_PROJ)/src/base/INotifiable.h \
	$(INET_V2_PROJ)/src/base/ModuleAccess.h \
	$(INET_V2_PROJ)/src/base/NotificationBoard.h \
	$(INET_V2_PROJ)/src/base/NotifierConsts.h \
	$(INET_V2_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_V2_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_V2_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_V2_PROJ)/src/networklayer/arp/ARPPacket_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_V2_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_V2_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_V2_PROJ)/src/transport/contract/TCPCommand_m.h \
	$(INET_V2_PROJ)/src/util/uint128.h \
	Buffer.h \
	Flow_Table.h \
	OF_Wrapper.h \
	Open_Flow_Processing.h \
	messages/Open_Flow_Message_m.h \
	openflow.h \
	utility/placeController.h

