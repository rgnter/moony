//
// Created by maros on 10/12/2020.
//

#include "Client.hpp"

bool Client::IsDebug() const {
    return debug;
}

Client::Client(bool debug, int width, int height) : debug(debug), width(width), height(height) {}

bool Client::ShouldRun() const {
    return shouldRun;
}

void Client::Start() {
    if(!glfwInit()) {
        printf("GLFW init fail\n");
        return;
    }


}