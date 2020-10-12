cmake_minimum_required(VERSION 3.17)
project(moony)

set(CMAKE_CXX_STANDARD 20)

#
# MoonyEngine
#
add_library(MoonyEngine STATIC deps/MoonyEngine/vendor/glad/glad.c source/MoonyEngine/MoonyEngine.hpp source/MoonyEngine/MoonyEngine.cpp source/MoonyEngine/assets/AssetMngr.cpp source/MoonyEngine/assets/AssetMngr.hpp source/MoonyEngine/scene/Scene.cpp source/MoonyEngine/scene/Scene.hpp source/MoonyEngine/scene/actor/Actor.cpp source/MoonyEngine/scene/actor/Actor.hpp)
target_include_directories(MoonyEngine PRIVATE deps/MoonyEngine/include)
target_include_directories(MoonyEngine PRIVATE deps/MoonyEngine/vendor)
# incl root
target_include_directories(MoonyEngine PUBLIC source/MoonyEngine)

target_link_libraries(MoonyEngine ../deps/MoonyEngine/lib/glfw/win32/glfw3)
#

#
# MoonyGame
#
add_executable(MoonyGame source/MoonyGame/bootstrap.cpp source/MoonyGame/Client.hpp source/MoonyGame/Client.cpp)
target_include_directories(MoonyGame PRIVATE deps/MoonyGame/include)
# incl root
target_include_directories(MoonyGame PRIVATE source/MoonyGame)

target_link_libraries(MoonyGame MoonyEngine)
#