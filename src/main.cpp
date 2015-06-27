#include <string>
#include <iostream>

#include "caf/all.hpp"
#include "event_switch.h"
#include "web_socket_server.h"

using std::endl;
using std::string;

using namespace caf;

int main() {
  auto switch_actor = spawn<event_switch>();

  spawn<web_socket_server>(switch_actor);
  // wait until all other actors we have spawned are done
  await_all_actors_done();
  // run cleanup code before exiting main
  shutdown();
}
