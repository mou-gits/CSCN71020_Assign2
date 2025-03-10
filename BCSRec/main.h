#pragma once


// This piece of code is added to avoid multiple inclusion of the header file
#ifndef MAIN_H
#define MAIN_H

// This code ensures proper compiling of the code written in C as opposed to C++
#ifdef __cplusplus
extern "C" {
#endif

	void setLength(int input, int* length);
	void setWidth(int input, int* width);
	int getPerimeter(int* length, int* width);
	int getArea(int* length, int* width);
	void printWelcomeMenu();
	void printOptions();
	int getIntInput(char message[]);

#ifdef __cplusplus
}
#endif

#endif

