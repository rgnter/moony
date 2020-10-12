//
// Created by maros on 10/12/2020.
//

#include "Actor.hpp"


Actor::Actor(const glm::vec3 location, const glm::vec3 rotation, const glm::vec3 scale) {
    this->location = location;
    this->rotation = rotation;
    this->scale    = scale;
}
