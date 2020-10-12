//
// Created by maros on 10/12/2020.
//

#ifndef MOONY_CLIENT_HPP
#define MOONY_CLIENT_HPP


class Client {
private:
    bool debug;
    int width;
    int height;

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
