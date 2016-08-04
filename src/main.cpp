#include <string>
#include <iostream>

#include "caf/all.hpp"
#include "actor_server/http_listener.hpp"

using std::endl;
using std::string;

using namespace caf;

int main() {
  // spawn listener to listen on a specific port
  auto http_listener = spawn<http_listener>();
  // wait until all other actors we have spawned are done
  await_all_actors_done();
  // run cleanup code before exiting main
  shutdown();
}
