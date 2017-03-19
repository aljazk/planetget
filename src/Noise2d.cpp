#include "Noise2d.hpp"

float random(){
	return (float)rand()/RAND_MAX;
}

float Cosine_Interpolate(float a, float b, float x){
	float ft = x * 3.1415927;
	float f = (1.0 - cos(ft)) * .5;

	return  a*(1.0-f) + b*f;
}

#define SIZE_X 300
#define SIZE_Y 300

Noise2d::Noise2d(){
	srand(time(NULL));
	set();
}

void Noise2d::set(){
	noise_layer.set(SIZE_X, SIZE_Y);
	
	/* addLayer(150, 5);
	addLayer(100, 10);
	addLayer(10, 60);
	addLayer(5, 150); */
	NoiseLayer layer;
	layer = create(150, 5);
	layer = layer + create(100, 10);
	layer = layer + create(10, 60);
	layer = layer + create(5, 150);
	noise_layer.over(layer);
	layer = create(150, 10);
	layer = layer + create(30, 75);
	layer = layer + create(5, 150);
	layer.cut(100);
	noise_layer.over(layer);
}

NoiseLayer Noise2d::create(const float hight, const float freq){
	std::vector < std::vector < float > > apoints;
	for(int x=0; x<freq +2; x++){
		std::vector<float> row;
		apoints.push_back(row);
		for(int y=0; y<freq +2; y++){
			apoints[x].push_back(random() * hight);
		}
	}
	
	NoiseLayer layer;
	int bx = 0, by = 0;
	int sizex = noise_layer.size_x / (apoints.size()-2);
	int sizey = noise_layer.size_y / (apoints[0].size()-2);
	for(int x=0; x<noise_layer.size_x; x++){
		for(int y=0; y<noise_layer.size_y; y++){
			//points[x][y] += apoints[bx][by];
			float ci1 = Cosine_Interpolate(apoints[bx][by],apoints[bx+1][by], 1 - (float)(bx*sizex - x) / sizex);
			float ci2 = Cosine_Interpolate(apoints[bx][by+1],apoints[bx+1][by+1], 1 - (float)(bx*sizex - x) / sizex);
			float ci = Cosine_Interpolate(ci1, ci2, 1 - (float)(by*sizey - y) / sizey);
			layer.layer[x][y] += ci;
			if (y % sizey == 0) {
				by++;
			}
		}
		by = 0;
		if (x % sizey == 0) {
			bx++;
		}
	}
	return layer;
}

void Noise2d::addLayer(float hight, float freq){
	std::vector < std::vector < float > > apoints;
	for(int x=0; x<freq +2; x++){
		std::vector<float> row;
		apoints.push_back(row);
		for(int y=0; y<freq +2; y++){
			apoints[x].push_back(random() * hight);
		}
	}
	
	int bx = 0, by = 0;
	int sizex = SIZE_X / (apoints.size()-2);
	int sizey = SIZE_Y / (apoints[0].size()-2);
	for(int x=0; x<SIZE_X; x++){
		for(int y=0; y<SIZE_Y; y++){
			//points[x][y] += apoints[bx][by];
			float ci1 = Cosine_Interpolate(apoints[bx][by],apoints[bx+1][by], 1 - (float)(bx*sizex - x) / sizex);
			float ci2 = Cosine_Interpolate(apoints[bx][by+1],apoints[bx+1][by+1], 1 - (float)(bx*sizex - x) / sizex);
			float ci = Cosine_Interpolate(ci1, ci2, 1 - (float)(by*sizey - y) / sizey);
			noise_layer.layer[x][y] += ci;
			if (y % sizey == 0) {
				by++;
			}
		}
		by = 0;
		if (x % sizey == 0) {
			bx++;
		}
	}
}

void Noise2d::smoothLayer(std::vector < std::vector < float > > lpoints){
	
};

float Noise2d::SmoothNoise_1(float x, float y){
	float corners = ( noise_layer.layer[x-1][y-1]+noise_layer.layer[x+1][y-1]+noise_layer.layer[x-1][y+1]+noise_layer.layer[x+1][y+1] ) / 16;
	float sides   = ( noise_layer.layer[x-1][y]+noise_layer.layer[x+1][y]+noise_layer.layer[x][y-1]+noise_layer.layer[x][y+1] ) /  8;
	float center  =  noise_layer.layer[x][y] / 4;
	return corners + sides + center;
}

void Noise2d::draw(sf::RenderWindow &window){
	
	sf::VertexArray quad(sf::Quads);
	sf::Vertex vert;
	sf::Vector2u texture_size = noise.getSize();
	sf::Vector2u size(200,200);
	int pos_x = 200, pos_y = 0;
	vert.position.x = pos_x;
	vert.position.y = pos_y;
	vert.texCoords.x = 0;
	vert.texCoords.y = 0;
	quad.append(vert);
	vert.position.x = pos_x+size.x;
	vert.position.y = pos_y;
	vert.texCoords.x = texture_size.x;
	vert.texCoords.y = 0;
	quad.append(vert);
	vert.position.x = pos_x+size.x;
	vert.position.y = pos_y+size.y;
	vert.texCoords.x = texture_size.x;
	vert.texCoords.y = texture_size.y;
	quad.append(vert);
	vert.position.x = pos_x;
	vert.position.y = pos_y+size.y;
	vert.texCoords.x = 0;
	vert.texCoords.y = texture_size.y;
	quad.append(vert);
	
	window.draw(quad, &noise);
	
	quad.clear();
	
	texture_size = planet.getSize();
	size.x = 300; size.y = 300*0.75;
	pos_x = 200, pos_y = 200;
	vert.position.x = pos_x;
	vert.position.y = pos_y;
	vert.texCoords.x = 0;
	vert.texCoords.y = 0;
	quad.append(vert);
	vert.position.x = pos_x+size.x;
	vert.position.y = pos_y;
	vert.texCoords.x = texture_size.x;
	vert.texCoords.y = 0;
	quad.append(vert);
	vert.position.x = pos_x+size.x;
	vert.position.y = pos_y+size.y;
	vert.texCoords.x = texture_size.x;
	vert.texCoords.y = texture_size.y;
	quad.append(vert);
	vert.position.x = pos_x;
	vert.position.y = pos_y+size.y;
	vert.texCoords.x = 0;
	vert.texCoords.y = texture_size.y;
	quad.append(vert);
	
	window.draw(quad, &planet);
}

void Noise2d::save(){
	sf::Image image;
	image.create(SIZE_X,SIZE_Y);
	float ci_red = random();
	float ci_green = random();
	float ci_blue = random();
	for(int x=0; x<SIZE_X; x++){
		for(int y=0; y<SIZE_Y; y++){
			float ci = noise_layer.layer[x][y];
			sf::Color color = sf::Color(ci * ci_red, ci * ci_green, ci * ci_blue, 255);
			image.setPixel(x,y, color);
		}
	}
	image.saveToFile("planet.png");
	noise.loadFromImage(image);
}

void Noise2d::load(){
	if (!planet.loadFromFile("splanet.png")){
		std::cout << "Cannot load from splanet.png\n";
	} else {
		planet.setSmooth(true);
	}
}

sf::Image Noise2d::get(){
	sf::Image image;
	image.create(SIZE_X,SIZE_Y);
	for(int x=0; x<SIZE_X; x++){
		for(int y=0; y<SIZE_Y; y++){
			float ci = noise_layer.layer[x][y];
			sf::Color color = sf::Color(ci,ci,ci,255);
			image.setPixel(x,y, color);
		}
	}
	return image;
}