cmake_minimum_required(VERSION 2.8.6)
project(caf_actor_server)

include_directories(. ${LIBCAF_INCLUDE_DIRS})

file(GLOB ACTOR_SERVER_HDRS "actor_server/*.hpp")

set(ACTOR_SERVER_SRCS
	src/main.cpp
	src/http_server_connection.cpp
	src/http_listener.cpp)

add_executable(actor_server ${ACTOR_SERVER_SRCS} ${ACTOR_SERVER_HDRS})

target_link_libraries(actor_server
			${LD_FLAGS}
			${CAF_LIBRARY_CORE}
			${CAF_LIBRARY_IO}
			${CAF_LIBRARY_RIAC}
			${PTHREAD_LIBRARIES})

install(PROGRAMS ${EXECUTABLE_OUTPUT_PATH}/actor_server DESTINATION bin)
