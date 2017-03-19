#ifndef ALERT_H
#define ALERT_H

#include "../Object.hpp"

class Alert : public Object{
		float fade;
	public:
		Alert();
		bool click(const sf::Vector2i);
		void animate(float);
};

#endif