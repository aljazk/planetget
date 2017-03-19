#include "Alert.hpp"

Alert::Alert(){
	setColor(sf::Color(0,0,0,0));
	setName("Alert");
	fade = 255;
}

bool Alert::click(const sf::Vector2i mouse){
	if (mouse.x < 1){
		//to avoid warning
	}
	return 0;
}

void Alert::animate(float ecl){
	position.y -= ecl*10;
	setPosition(sf::Vector2f(position.x, position.y));
	sf::Color text_color = text.getColor();
	if (fade > 0)
		fade -= ecl*50;
	text_color.a = (int)fade;
	setTextColor(text_color);
}