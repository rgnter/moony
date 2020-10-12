//
// Created by maros on 10/12/2020.
//
#include <cxxopts/cxxopts.hpp>
#include "Client.hpp"

int main(int argc, char **argv) {

    cxxopts::Options options("Moony", "Moony desc.");
    options.add_options()
            ("d,debug", "Enable debugging") // a bool parameter
            ("width", "Width param", cxxopts::value<int>())
            ("height", "Width param", cxxopts::value<int>());
    auto result = options.parse(argc, argv);

    bool debug = result["debug"].as<bool>();

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

    printf("%s", debug ? "Debug enabled\n" : "");
    printf("Resolution%s: %dx%d\n", mod ? " (from opt)" : " (default)", width, height);
    printf("MoonyEngine ver: %s", VERSION);

    Client client(debug, width, height);
    client.Start();

}