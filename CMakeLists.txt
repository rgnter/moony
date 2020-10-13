cmake_minimum_required(VERSION 3.17)
project(moony)

set(CMAKE_CXX_STANDARD 20)

#
# Moony
#
add_executable(moony deps/vendor/glad/glad.c source/bootstrap.cpp source/Client.hpp source/Client.cpp source/renderer/actor/mesh/Mesh.hpp source/renderer/actor/mesh/MeshCube.hpp source/renderer/actor/mesh/MeshPane.hpp source/renderer/RenderMngr.cpp source/renderer/RenderMngr.hpp source/assets/AssetsMngr.cpp source/assets/AssetsMngr.hpp source/renderer/actor/Actor.cpp source/renderer/actor/Actor.hpp source/renderer/actor/shader/Shader.cpp source/renderer/actor/shader/Shader.hpp)
target_include_directories(moony PRIVATE deps/include)

target_include_directories(moony PRIVATE source)
target_link_libraries(moony ../deps/lib/glfw/win32/glfw3)
target_link_libraries(moony ../deps/lib/spdlog/spdlogd)

#