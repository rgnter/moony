//
// Created by maros on 10/13/2020.
//

#ifndef MOONY_SHADER_HPP
#define MOONY_SHADER_HPP

#include <glad/glad.h>
#include <stdint.h>

struct ShaderUnit {
    uint32_t handle;

};

class Shader {

private:
    uint32_t handle;

private:
    void Link() {
        glLinkProgram(this->handle);
    }

public:
    void Bind() {
        glUseProgram(this->handle);
    }

    void Unbind() {
        glUseProgram(0);
    }
public:
    uint32_t GetHandle() const;
};


#endif //MOONY_SHADER_HPP
