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
    if(InitGL()) {

        glClearColor(0.1, 0.1, 0.1, 1);
        while(!glfwWindowShouldClose(this->window)) {
            glClear(GL_COLOR_BUFFER_BIT);

            glfwSwapBuffers(this->window);
            glfwPollEvents();
        }
    }
}

bool Client::InitGL() {
    if(!glfwInit()) {
        char msg[512];
        glfwGetError((const char **) &msg);
        spdlog::error("GLFW initialization failed! {}", msg);
        return false;
    }
    spdlog::debug("GLFW initialized");
    spdlog::info("GLFW Version: {}", glfwGetVersionString());

    this->window = glfwCreateWindow(this->width, this->height, "Moony", nullptr, nullptr);
    if(!window) {
        char msg[512];
        glfwGetError((const char **) &msg);
        spdlog::error("GLFW window creation failed! {}", msg);
        return false;
    }
    spdlog::debug("GLFW Window created.");
    glfwMakeContextCurrent(this->window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        spdlog::error("GLAD proc link failed");
        return -1;
    }
    spdlog::debug("GLAD proc linked");

    return true;
}
