//
// Created by maros on 10/12/2020.
//

#ifndef MOONY_CLIENT_HPP
#define MOONY_CLIENT_HPP

#include <cstdio>
#include <cstdlib>

#include <spdlog/spdlog.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>



class Client {
private:
    bool debug;

    GLFWwindow* window;
    int width;
    int height;

    bool fullscreen = false;
private:
    volatile bool shouldRun = false;


public:
    Client(bool debug, int width, int height);

public:
    void Start();

private:
    bool InitGL();

public:
    bool IsDebug() const;
    bool ShouldRun() const;

    void SetFullscreen(bool fullscreen);
};


#endif //MOONY_CLIENT_HPP
