#ifndef SERVER_H
#define SERVER_H

#include <event.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <thread>
#include <iostream>
#include <event2/listener.h>

using namespace std;

#define IP "172.20.48.129"
#define PORT 8000

class Server
{
private:
    struct event_base *base;        //事件集合
    struct evconnlistener *listener;  //监听事件

private:
    static void listener_cb(struct evconnlistener *linstener,evutil_socket_t fd, struct sockaddr *addr,int socklen,void *arg);
    static void client_handler(int);
    static void read_cb(struct bufferevent *bev, void *ctx);
    static void event_cb(struct bufferevent *bev, short what, void *ctx);
public:
    Server(const char *ip = "127.0.0.1" , int port = 8000);
    ~Server();
};

#endif
