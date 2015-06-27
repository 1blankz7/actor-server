#ifndef WEB_SOCKET_SERVER_H
#define WEB_SOCKET_SERVER_H

#include <caf/all.hpp>

class web_socket_server : caf::event_based_actor
{
public:
    web_socket_server(const caf::actor& switch_actor);

private:
    caf::actor& switch_actor;
};

#endif // WEB_SOCKET_SERVER_H
