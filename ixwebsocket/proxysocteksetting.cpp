#include <iostream>
#include "proxysocteksetting.h"
#include "proxysocket.h"


void ProxySetup::setProxyPass(std::string &proxypass) {

    proxyPass = proxypass;
}


void ProxySetup::setProxyUser(std::string &proxyuser) {

    proxyUser = proxyuser;
}


void ProxySetup::setProxyHost(std::string &proxyhost) {

    proxyHost = proxyhost;
}


void ProxySetup::setProxyType(std::string &proxytype) {

    int proxytype_number = PROXYSOCKET_TYPE_NONE;

    proxytype_number = proxysocketconfig_get_name_type(proxytype.c_str());

    ProxyConnType = proxytype_number;
}


int ProxySetup::get_proxy_type() const
{
    return ProxyConnType;
}
std::string ProxySetup::get_proxy_user() const
{
    return proxyUser;
}
int ProxySetup::get_proxy_port() const
{
    return proxyPort;
}
std::string ProxySetup::get_proxy_pass() const
{
    return proxyPass;
}
std::string ProxySetup::get_proxy_host() const
{
    return proxyHost;
}
void ProxySetup::setProxyPort(ProxyPortE PP)
{
    proxyPort =  int(PP);
}
