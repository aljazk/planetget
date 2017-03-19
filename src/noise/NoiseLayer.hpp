#ifndef NOISELAYER_H
#define NOISELAYER_H

#include <vector>

class NoiseLayer{
	public:
		std::vector < std::vector < float > > layer;
		float size_x, size_y;
		unsigned int color_r, color_g, color_b;
		NoiseLayer();
		NoiseLayer(const unsigned int, const unsigned int);
		void set(const unsigned int, const unsigned int);
		void cut(const unsigned int);
		void over(const NoiseLayer &);
		//operators	
		NoiseLayer operator+ (const NoiseLayer& add_layer) {
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
					layer[x][y] += add_layer.layer[x][y];
				}
			}
			return *this;
		}
};

#endif