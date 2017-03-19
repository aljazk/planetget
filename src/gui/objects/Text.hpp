#ifndef TEXT_H
#define TEXT_H

#include "../Object.hpp"

class Text : public Object{
	public:
		Text();
		bool click(const sf::Vector2i);
};

#endif