TARGET=release/planet
CFLAGS=-Wall -Wextra -DSFML_STATIC -O3 -flto -std=c++11
LFLAGS=-static -O3 -flto \
	-lglfw3 -lopengl32 -lgdi32 \
	-lsfml-graphics-s -lsfml-window-s -lsfml-network-s -lsfml-system-s  \
	-lws2_32 -ljpeg -lfreetype -lgdi32 -lopengl32 -lwinmm
FILES=main.cpp Display.cpp Noise2d.cpp \
	noise/NoiseLayer.cpp \
	gui/GUI.hpp gui/Object.cpp \
	gui/objects/Button.cpp gui/objects/Text.cpp gui/objects/Alert.cpp gui/objects/Input.cpp gui/objects/TexturedButton.cpp \
	glfw/GLFW.cpp glfw/gl_core_3_3.cpp glfw/Shader.cpp \
	draw/VertQuad.cpp

OBJS=$(patsubst %,build/%.o,$(basename $(FILES)))
.PHONY: all clean
all: $(TARGET)
$(TARGET): $(OBJS)
	@echo "Linking..."
	@mkdir -p $(@D)
	@g++ $(OBJS) $(LFLAGS) -o $(TARGET)
	@echo "Done."
build/%.o: src/%.cpp
	@echo "Compiling $<"
	@mkdir -p $(@D)
	@g++ -c $< $(CFLAGS) -o $@
build/%.o: src/%.c
	@echo "Compiling $<"
	@mkdir -p $(@D)
	@g++ -c $< $(CFLAGS) -o $@
src/%.cpp : src/%.hpp
src/%.c : src/%.h
clean:
	@rm -rf *.o $(TARGET) $(TARGET).exe build/
	@echo "Cleaned."
