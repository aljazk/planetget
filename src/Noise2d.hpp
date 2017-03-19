#ifndef NOISE2D_H
#define NOISE2D_H

#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include "noise/NoiseLayer.hpp"

class Noise2d{
		NoiseLayer noise_layer;
		NoiseLayer create(float, float);
		NoiseLayer create(float, float, float);
		void addLayer(float, float);
		void smoothLayer(std::vector < std::vector < float > >);
		sf::Texture noise, planet;
	public:
		Noise2d();
		void set();
		void save();
		sf::Image get();
		void draw(sf::RenderWindow &);
		void load();
		float SmoothNoise_1(float, float);
};

#endif