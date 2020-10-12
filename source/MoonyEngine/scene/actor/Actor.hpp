//
// Created by maros on 10/12/2020.
//

#ifndef MOONY_ACTOR_HPP
#define MOONY_ACTOR_HPP

#include <glm/glm.hpp>


class Actor {
private:
    glm::vec3 location;
    glm::vec3 rotation;
    glm::vec3 scale;

public:
    Actor(glm::vec3 location, glm::vec3 rotation, glm::vec3 scale);

};


#endif //MOONY_ACTOR_HPP
