#include <glm/glm.hpp>
#pragma once

struct Uniforms {
  glm::mat4 model;
  glm::mat4 view;
  glm::mat4 projection;
  glm::mat4 viewport;
};