#ifndef proxysocteksettings_h
#define proxysocteksettings_h

#include <iostream>

enum class ProxyPortE {

    proxyport_8080 = 8080,
    proxyport_8081 = 8081

};

struct ProxySetup {

public:


    void setProxyPass(std::string &proxypass);
    void setProxyUser(std::string &proxyuser);
    void setProxyHost(std::string &proxyhost);
    void setProxyType(std::string &proxytype) ;
    void setProxyPort(ProxyPortE PP);
    int get_proxy_type() const;
    int get_proxy_port() const;
    std::string get_proxy_pass() const;
    std::string get_proxy_user() const;
    std::string get_proxy_host() const;


private:

    std::string proxyPass;
    std::string proxyUser;
    std::string proxyHost;
    int ProxyConnType;
    int proxyPort = 8080;

};

#endif