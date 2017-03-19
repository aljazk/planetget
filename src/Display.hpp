#ifndef DISPLAY_H
#define DISPLAY_H

#include <SFML/Graphics.hpp>
#include "gui/GUI.hpp"
#include "glfw/GLFW.hpp"
#include "Noise2d.hpp"
#include <thread>

class Display{
		sf::RenderWindow window;
		GUI gui;
	public:
		Display();
		void createGUI();
		void run();
};

#endif