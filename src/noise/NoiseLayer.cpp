#include "NoiseLayer.hpp"

NoiseLayer::NoiseLayer(){
	set(300,300);
}

NoiseLayer::NoiseLayer(const unsigned int sx, const unsigned int sy){
	set(sx,sy);
}

void NoiseLayer::set(const unsigned int sx, const unsigned int sy){
	layer.clear();
	size_x = sx;
	size_y = sy;
	
	std::vector < float > row;
	layer.assign(size_x, row);
	for(int x=0; x<size_x ; x++){
		layer[x].assign( size_y, 0);
	}
}

void NoiseLayer::cut(const unsigned int cut_height){
	for(int x=0; x<size_x; x++){
		for(int y=0; y<size_y; y++){
			if (layer[x][y] < cut_height)
				layer[x][y] = 0;
		}
	}
	
}

void NoiseLayer::over(const NoiseLayer &add_layer){
	float add_size_x, add_size_y;
	if (add_layer.size_x < size_x){
		add_size_x = add_layer.size_x;
	} else {
		add_size_x = size_x;
	}
	if (add_layer.size_y < size_y){
		add_size_y = add_layer.size_y;
	} else {
		add_size_y = size_y;
	}
	
	for(int x=0; x<add_size_x; x++){
		for(int y=0; y<add_size_y; y++){
			if (add_layer.layer[x][y] != 0){
				layer[x][y] = add_layer.layer[x][y];
			}
		}
	}
	
}