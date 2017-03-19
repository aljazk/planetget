#ifndef GLFW_H
#define GLFW_H

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "gl_core_3_3.hpp"
#include "Shader.hpp"
#include <vector>
#include <SFML/Graphics/Image.hpp>
#include <SFML/System/InputStream.hpp>

using namespace GL;

class GLFW{
	public:
		GLFW();
		int run();
};

#endif