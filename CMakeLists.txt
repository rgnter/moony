cmake_minimum_required(VERSION 3.17)
project(moony)

set(CMAKE_CXX_STANDARD 20)

include_directories(deps/include)
link_libraries(../deps/lib/glfw/win32/glfw3)

include_directories(deps/vendor)

add_executable(moony source/bootstrap.cpp source/Client.cpp source/Client.hpp )
