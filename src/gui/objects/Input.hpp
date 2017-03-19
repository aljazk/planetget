#ifndef INPUT_H
#define INPUT_H

#include "../Object.hpp"

class Input : public Object{
	public:
		Input();
		void hover(const sf::Vector2i);
		bool click(const sf::Vector2i);
};

#endif