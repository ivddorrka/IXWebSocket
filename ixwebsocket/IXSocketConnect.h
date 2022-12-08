/*
 *  IXSocketConnect.h
 *  Author: Benjamin Sergeant
 *  Copyright (c) 2018 Machine Zone, Inc. All rights reserved.
 */

#pragma once

#include "IXCancellationRequest.h"
#include <string>

struct addrinfo;

namespace ix
{
    class SocketConnect
    {
    public:
        static int connect(const std::string& hostname,
                           int port,
                           std::string& errMsg,
                           const CancellationRequest& isCancellationRequested, std::string& proxyhost, int proxyport);

        static void configure(int sockfd);
        static void setProxyHost(std::string& proxyhost);
        static void setProxyPort(int proxyport);


    private:
        static int _proxyport;
        static std::string _proxyhost;
        static int connectToAddressViaProxy(const std::string& host, int port, std::string& errMsg, std::string& proxyhost, int proxyport);

        static int connectToAddress(const struct addrinfo* address,
                                    std::string& errMsg,
                                    const CancellationRequest& isCancellationRequested);
    };
} // namespace ix
