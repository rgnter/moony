//
// Created by maros on 10/12/2020.
//
#include <cxxopts/cxxopts.hpp>
#include "Client.hpp"
#include <windows.h>

int main( int argc, char** argv) {
    cxxopts::Options options("Moony", "Moony desc.");
    options.add_options()
            ("d,debug", "Enable debugging") // a bool parameter
            ("f,fullscreen", "Enable debugging") // a bool parameter
            ("width", "Width param", cxxopts::value<int>())
            ("height", "Width param", cxxopts::value<int>());
    auto result = options.parse(argc, argv);

    bool debug = result["debug"].as<bool>();
    bool fullscreen = result["fullscreen"].as<bool>();

    bool mod = false;
    int width = 1920;
    int height = 1080;

    if(result.count("width") > 0) {
        mod = true;
        width = result["width"].as<int>();
    }
    if(result.count("height") > 0) {
        mod = true;
        height = result["height"].as<int>();
    }
    if(debug) {
        spdlog::set_level(spdlog::level::debug);
        spdlog::info("Debug enabled.");
    } else
        FreeConsole();


    spdlog::info("Resolution{}: {}x{}", mod ? " (from opt)" : " (default)", width, height);

    Client client(debug, width, height);
    client.SetFullscreen(fullscreen);
    client.Start();
}