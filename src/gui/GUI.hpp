#ifndef GUI_H
#define GUI_H

#include <iostream>
#include <vector>
#include <memory>

#include "Object.hpp"

#include "objects/Button.hpp"
#include "objects/Text.hpp"
#include "objects/Alert.hpp"
#include "objects/Input.hpp"
#include "objects/TexturedButton.hpp"

class GUI{
		std::vector<std::unique_ptr<Object>> objects;
		bool mouse_down;
		int check_click;
		sf::Texture gui_texture;
	public:
		GUI();
		template <typename T> void add(T &newObject){
			std::unique_ptr<T> obj(new T);
			*obj = newObject;
			objects.push_back(std::move(obj));
			std::cout << "Object added to gui\n";
		}
		void loadTexture(const std::string &);
		void clear();
		std::string check(const sf::RenderWindow&);
		void draw(sf::RenderWindow &);
		void draw(sf::RenderWindow &, float);
		void enterText(const sf::Event &);
};


#endif
/*
template <typename T>
class GUI{
		std::vector<std::unique_ptr<T>> objects;
		sf::Font font;
		bool mouse_down;
		int check_click;
	public:
		GUI();
		void add(T);
		void clear();
		std::string check(const sf::RenderWindow&);
		void draw(sf::RenderWindow&);
		void enterText(sf::Event);
		std::string getName(const unsigned int&);
};

template <typename T>
GUI<T>::GUI(){
	font.loadFromFile("arial.ttf");
	check_click = -1;
}

template <typename T>
void GUI<T>::add(T newObject){
	objects.emplace_back(&newObject);
	std::cout << "Object added to gui\n";
}

template <typename T>
void GUI<T>::clear(){
	std::cout << objects.size() << " objects removed from gui\n";
	objects.clear();
}

template <typename T>
void GUI<T>::enterText(sf::Event event){
	old version
	if (event.type == sf::Event::TextEntered){
		for(unsigned int i=0; i<inputs.size(); i++){
			if (event.text.unicode < 128){
				inputs[i].addChar(event.text.unicode);
	}
	
}

template <typename T>
std::string GUI<T>::check(const sf::RenderWindow &window){
	const sf::Vector2i mouse_position = sf::Mouse::getPosition(window);
	
	std::string action = "";
	//check if mouse hovers a object
	if(check_click == -1){
		for(unsigned int i=0; i<objects.size(); i++){
			objects[i]->hover(mouse_position);
		}
		
		//check if mouse clicked a object
		if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
			if(!mouse_down){
				for(unsigned int i=0; i<objects.size(); i++){
					if (objects[i]->click(mouse_position)){
						std::cout << "Entering check click mode\n";
						check_click = i;
					}
				}
			}
			mouse_down = true;
		} else {
			mouse_down = false;
		}
	} else {
		if(!sf::Mouse::isButtonPressed(sf::Mouse::Left)){
			if (objects[check_click]->click(mouse_position)){
				std::cout << "Object clicked! \n";
				action = objects[check_click]->action;
				check_click = -1;
			} else {
				std::cout << "Leaving check click mode\n";
				check_click = -1;
			}
		}
	}
	
	return action;
}

template <typename T>
void GUI<T>::draw(sf::RenderWindow &window){
	std::cout << "Drawing objects.. \n";
	//draw object texture
	sf::VertexArray vertex;
	vertex.setPrimitiveType(sf::Quads);
	
	for(unsigned int i=0; i<objects.size(); i++){
		objects[i]->getVert(vertex);
	}
	window.draw(vertex);
	
	//draw object text
	sf::Text text;
	text.setFont(font);
	for(unsigned int i=0; i<objects.size(); i++){
		text.setString("Object");
		text.setPosition(sf::Vector2f(100,100));
		window.draw(text);
	}
	std::cout << "Drawing done!\n";
}

template <typename T>
std::string GUI<T>::getName(const unsigned int &nid){
	return objects[nid]->name;
}
*/