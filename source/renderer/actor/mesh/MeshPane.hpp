//
// Created by maros on 10/13/2020.
//

#ifndef MOONY_MESHPANE_HPP
#define MOONY_MESHPANE_HPP

#include "Mesh.hpp"

class MeshPane : Mesh {
public:
    MeshPane() {
        this->vertices = new float[]{
                -0.5f, -0.5f, 0.0f,
                0.5f, -0.5f, 0.0f,
                0.0f,  0.5f, 0.0f
        };
        this->verticesCount = 9;
        this->hasIndices = false;

    }
};

#endif //MOONY_MESHPANE_HPP
