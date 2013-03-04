An OpenFlow Extension for the OMNeT++ INET Framework
=======
On this website, we present the implementation of our model of the OpenFlow system 
for INET-2.0 and OMNeT++ 4.2 based on the OpenFlow switch specification 1.0.

Required changes to the INET framework 2.0
-------
The following changes are required so that the FlatNetworkConfigurator ignores the data plane interfaces for
OpenFlow switches. The `EtherMACBase::registerInterface` method in `src/linklayer/ethernet/EtherMACBase` is changed 
so that the data plane interfaces of OpenFlow swtiches are not added to the InterfaceTable module and hence are ignored by the 
FlatNetworkConfigurator. 

Modify file `src/linklayer/ethernet/EtherMACBase`

Change method `EtherMACBase::registerInterface`

FROM

    if (ift)
        ift->addInterface(interfaceEntry);

TO

    if (ift && par("doRegisterAtIft").boolValue())
        ift->addInterface(interfaceEntry);

ADD new parameter 

    bool doRegisterAtIft = default(true);

in the following modules:

* EtherMAC.ned
* EtherMACFullDuplex.ned

Links
-------

More informations about the implementation can be found on our webpage: [link](http://www3.informatik.uni-wuerzburg.de/research/ngn/ofomnet/of_omnet.shtml).

