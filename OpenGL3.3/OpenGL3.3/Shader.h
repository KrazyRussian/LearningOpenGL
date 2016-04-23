#ifndef SHADER_H
#define SHADER_H
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include "include\GL\glew.h"

class Shader{
public:
	
	GLuint Program;

	Shader(const GLchar* _vertexPath, const GLchar* _fragmnetPath);
	void Use();

};
#endif