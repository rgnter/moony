//
// Created by maros on 10/13/2020.
//

#ifndef MOONY_MESH_HPP
#define MOONY_MESH_HPP

class Mesh {
protected:
    const float* vertices;
    const float* indices;

    int verticesCount;
    int indicesCount;

    bool hasIndices = false;

public:
    const float* GetVertices() const {
        return vertices;
    }

    const float* GetIndices() const {
        return indices;
    }

    int GetVerticesCount() const {
        return verticesCount;
    }

    int GetVertexCount() const {
        return verticesCount / 3;
    }

    int GetIndicesCount() const {
        return indicesCount;
    }

    bool HasIndices() const {
        return hasIndices;
    }

};

#endif //MOONY_MESH_HPP
