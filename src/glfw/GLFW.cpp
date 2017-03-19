#include "GLFW.hpp"


bool keys[1024];

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode){
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
	if (key >= 0 && key < 1024){
		if (action == GLFW_PRESS){
			keys[key] = true;
		} else if (action == GLFW_RELEASE)
			keys[key] = false;
	}
	scancode += 0;
	mode += 0;
}

GLFW::GLFW(){
	run();
}
	
int GLFW::run(){
	std::cout << "Running 3d model of the planet\n";
	if (!glfwInit()) return -1;
	
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	
	GLFWwindow* window = glfwCreateWindow(800, 600, "glfw", nullptr, nullptr);
	if (window == nullptr) return -1;
	glfwMakeContextCurrent(window);
	
	glfwSetKeyCallback(window, key_callback);
	
	if (!glLoadFunctions(glfwGetProcAddress)) return -1;
	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	//glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	
	glViewport(0, 0, 800, 600); // Set screen size to 800x600
	glClearColor(0., 0.0, 0.0, 0.); // Set clear color to red
	glEnable(GL_DEPTH_TEST);  

	//create shader
	Shader ourShader("sha.vert", "sha.frag");
	
	//set triangle location
	const int radius = 262;
	std::vector<GLfloat> vertices;
	const GLfloat ang = atan(1)*4/radius;
	const GLfloat dist = 1;
	for(int r=0; r<radius; r++){
		for(int i=0; i<radius*2; i++){
			//calculate position
			GLfloat xl1 = cos(ang*i)*dist;
			GLfloat yl1 = sin(ang*i)*dist;
			GLfloat xl2 = cos(ang*(i+1))*dist;
			GLfloat yl2 = sin(ang*(i+1))*dist;
			GLfloat zl1 = sin((atan(1)*4.0/(radius))*r)*xl1;
			xl1 = cos((atan(1)*4.0/(radius))*r)*xl1;
			GLfloat zl2 = sin((atan(1)*4/(radius))*r)*xl2;
			xl2 = cos((atan(1)*4/(radius))*r)*xl2;
			
			
			GLfloat xr1 = cos(ang*i)*dist;
			GLfloat yr1 = sin(ang*i)*dist;
			GLfloat xr2 = cos(ang*(i+1))*dist;
			GLfloat yr2 = sin(ang*(i+1))*dist;
			GLfloat zr1 = sin((atan(1)*4/(radius))*(r+1))*xr1;
			xr1 = cos((atan(1)*4/(radius))*(r+1))*xr1;
			GLfloat zr2 = sin((atan(1)*4/(radius))*(r+1))*xr2;
			xr2 = cos((atan(1)*4/(radius))*(r+1))*xr2;
			
			
			GLfloat u1x = xr1 - xl2;
			GLfloat u1y = yr1 - yl2;
			GLfloat u1z = zr1 - zl2;
			GLfloat v1x = xl1 - xl2;
			GLfloat v1y = yl1 - yl2;
			GLfloat v1z = zl1 - zl2;
			GLfloat n1x = (u1y*v1z) - (u1z*v1y);
			GLfloat n1y = (u1z*v1x) - (u1x*v1z);
			GLfloat n1z = (u1x*v1y) - (u1y*v1x);
			if (i > radius/2 && i < radius/2*3){
				n1x *= -1;
				n1y *= -1;
				n1z *= -1;
			}
			
			
			vertices.push_back(xl1);
			vertices.push_back(yl1);
			vertices.push_back(zl1);
			vertices.push_back(n1x);
			vertices.push_back(n1y);
			vertices.push_back(n1z);
			vertices.push_back(0.5 - (atan2(zl1,xl1))/(2*atan(1)*4));
			vertices.push_back(0.5 - (asin(yl1))/(atan(1)*4));
			
			vertices.push_back(xr1);
			vertices.push_back(yr1);
			vertices.push_back(zr1);
			vertices.push_back(n1x);
			vertices.push_back(n1y);
			vertices.push_back(n1z);
			vertices.push_back(0.5 - (atan2(zr1,xr1))/(2*atan(1)*4));
			vertices.push_back(0.5 - (asin(yr1))/(atan(1)*4));
			
			vertices.push_back(xl2);
			vertices.push_back(yl2);
			vertices.push_back(zl2);
			vertices.push_back(n1x);
			vertices.push_back(n1y);
			vertices.push_back(n1z);
			vertices.push_back(0.5 - (atan2(zl2,xl2))/(2*atan(1)*4));
			vertices.push_back(0.5 - (asin(yl2))/(atan(1)*4));
			
			vertices.push_back(xl2);
			vertices.push_back(yl2);
			vertices.push_back(zl2);
			vertices.push_back(n1x);
			vertices.push_back(n1y);
			vertices.push_back(n1z);
			vertices.push_back(0.5 - (atan2(zl2,xl2))/(2*atan(1)*4));
			vertices.push_back(0.5 - (asin(yl2))/(atan(1)*4));
			
			vertices.push_back(xr1);
			vertices.push_back(yr1);
			vertices.push_back(zr1);
			vertices.push_back(n1x);
			vertices.push_back(n1y);
			vertices.push_back(n1z);
			vertices.push_back(0.5 - (atan2(zr1,xr1))/(2*atan(1)*4));
			vertices.push_back(0.5 - (asin(yr1))/(atan(1)*4));
			
			vertices.push_back(xr2);
			vertices.push_back(yr2);
			vertices.push_back(zr2);
			vertices.push_back(n1x);
			vertices.push_back(n1y);
			vertices.push_back(n1z);
			vertices.push_back(0.5 - (atan2(zr2,xr2))/(2*atan(1)*4));
			vertices.push_back(0.5 - (asin(yr2))/(atan(1)*4));
		}
	}
	
	//create object
	GLuint VBO, VAO;
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	
	//create sphere array
	glBindVertexArray(VAO);
	
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(GLfloat), &vertices[0], GL_STATIC_DRAW);
	
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);
	
	glBindVertexArray(0);
	
		
	//load texture
	sf::Image image_file;
	image_file.loadFromFile("planet.png");
	const unsigned char *image = image_file.getPixelsPtr();
	
	GLuint texture;
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	
	// Set the texture wrapping parameters
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	// Set texture wrapping to GL_REPEAT (usually basic wrapping method)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	// Set texture filtering parameters
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image_file.getSize().x, image_file.getSize().y, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	glGenerateMipmap(GL_TEXTURE_2D);
	
	//delete image_file;
	//delete image;
	glBindTexture(GL_TEXTURE_2D, 0);
	
	//positioning
	glm::mat4 model;
	model = glm::rotate(model, 180.0f, glm::vec3(0.0f, 1.0f, 0.0f)); //transforms object

	glm::mat4 view;
	view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f)); //sets camera location
	
	glm::mat4 proj = glm::perspective(45.0f, 800.0f/600.0f, 0.1f, 100.0f); // makes depth
	
	
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
		
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  // Clear screen with current clear color
		
		//move
		GLfloat mx = 0.0f, my = 0.0f, mz = 0.0f;
		bool save = false;
		GLfloat speed = 0.00001f;
		for(int i=0; i<1024; i++){
			if(keys[GLFW_KEY_W]){
				mz += speed;
			}
			if(keys[GLFW_KEY_S]){
				mz -= speed;
			}
			if(keys[GLFW_KEY_A]){
				mx += speed;
			}
			if(keys[GLFW_KEY_D]){
				mx -= speed;
			}
			if(keys[GLFW_KEY_LEFT_SHIFT]){
				my += speed;
			}
			if(keys[GLFW_KEY_SPACE ]){
				my -= speed;
			}
			if(keys[GLFW_KEY_ENTER ]){
				save = true;
			}
		}
		view = glm::translate(view, glm::vec3(mx, my, mz));
		model = glm::rotate(model, 0.001f, glm::vec3(0.0f, 1.0f, 0.0f)); //transforms object
		
		//set positioning
		GLuint projectionLoc = glGetUniformLocation(ourShader.Program, "model");
		glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(model));
		projectionLoc = glGetUniformLocation(ourShader.Program, "view");
		glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(view));
		projectionLoc = glGetUniformLocation(ourShader.Program, "proj");
		glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(proj));
			
		glBindTexture(GL_TEXTURE_2D, texture);
		//draw triangle
		ourShader.Use();
		glBindVertexArray(VAO);
		glDrawArrays(GL_TRIANGLES, 0, vertices.size());
		glBindVertexArray(0);
		
		glfwSwapBuffers(window);
		if(save){
			unsigned char save_image[4 * 800 * 600];
			glReadPixels(0, 0, 800, 600, GL_RGBA, GL_UNSIGNED_BYTE, save_image);
			sf::Image save_image_file;
			save_image_file.create(800, 600, save_image);
			save_image_file.flipVertically();
			save_image_file.saveToFile("splanet.png");
			break;
		}
	}
	
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	
	glfwDestroyWindow(window);
	glfwTerminate();
	std::cout << "return\n";
	return 0;


}