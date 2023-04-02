#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <map>

using namespace std;
#define SCHEMA_H

namespace Schema
{
	const unsigned int SCR_WIDTH = 800;
	const unsigned int SCR_HEIGHT = 600;
	const unsigned int nextLineMod = 20;
	const char* windowName = "Font Renderer";
	const char* fontLoadPath = "Fonts/cambriab.ttf";
	string content{"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."};
	
	struct Character
	{
		unsigned int TextureID;
		glm::ivec2 size;
		glm::ivec2 bearing;
		unsigned int advance;

	};
	std::map<char, Character> characters;
}
#undef SCHEMA_H
