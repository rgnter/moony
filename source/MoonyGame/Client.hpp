//
// Created by maros on 10/12/2020.
//

#ifndef MOONY_CLIENT_HPP
#define MOONY_CLIENT_HPP

#include <cstdio>
#include <cstdlib>
#include <MoonyEngine.hpp>


class Client {
private:
    bool debug;
    int width;
    int height;

    MoonyEngine engine;

private:
    volatile bool shouldRun = false;


public:
    Client(bool debug, int width, int height);

public:
    void Start();

public:
    bool IsDebug() const;
    bool ShouldRun() const;
};


#endif //MOONY_CLIENT_HPP
