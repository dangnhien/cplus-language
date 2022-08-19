#pragma once

#include <iostream>
//#include <string>
using namespace std;

#ifndef RECTANGE_H	
#define RECTANGE_H


class rectange
{
private:
	double width, height;
	string colors;

public:
	rectange();
	rectange(double width, double height, string color);
	~rectange();

	double getWidth();
	double getHeight();

	void setWidth(double width_set);
	void setHeight(double height_set);

	string getColor();
	void setColor(string color_set);

	double findArea();
	double findPerimeter();
};


#endif


