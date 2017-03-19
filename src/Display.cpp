#include "Display.hpp"

Display::Display(){
	sf::ContextSettings contextSettings;
    contextSettings.depthBits = 24;

    // Create the main window
    window.create(sf::VideoMode(500, 500), "Window");
	window.setVerticalSyncEnabled(true);
	
	createGUI();
}

void Display::createGUI(){
	Button b;
	int start = 20;
	int gap = 40;
	b.setSize(sf::Vector2f(200,30));
	b.setPosition(sf::Vector2f(20,start+gap*0));
	b.setName("Create Texture");
	b.action = "text";
	b.centerText();
	gui.add(b);
	b.setPosition(sf::Vector2f(20,start+gap*4));
	b.setName("Exit");
	b.action = "exit";
	b.centerText();
	gui.add(b);
}

void Display::run(){
	
	std::string mode = "";
	Noise2d noise2d;
	
	
    while (window.isOpen()){
        // Process events
        sf::Event event;
        while (window.pollEvent(event)){
			gui.enterText(event);
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
		}
		
		window.clear(sf::Color(200,200,200));
		
		std::string action = gui.check(window);
		if (action != ""){
			mode = action;
			if(action == "text"){
				noise2d.set();
				noise2d.save();
				GLFW glfw;
				window.create(sf::VideoMode(500, 500), "Window");
				window.setVerticalSyncEnabled(true);
				noise2d.load();
				noise2d.load();
				
			}
			if (action == "exit")
				window.close();
			action = "";
		}
		
		if (mode == "text"){
			noise2d.draw(window);
		}
		gui.draw(window);
		
		
        window.display();
    }
}