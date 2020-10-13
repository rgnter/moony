cmake_minimum_required(VERSION 3.17)
project(moony)

set(CMAKE_CXX_STANDARD 20)

#
# Moony
#
add_executable(moony deps/vendor/glad/glad.c source/bootstrap.cpp source/Client.hpp source/Client.cpp)
target_include_directories(moony PRIVATE deps/include)

target_include_directories(moony PRIVATE source)
target_link_libraries(moony ../deps/lib/glfw/win32/glfw3)
target_link_libraries(moony ../deps/lib/spdlog/spdlogd)

#