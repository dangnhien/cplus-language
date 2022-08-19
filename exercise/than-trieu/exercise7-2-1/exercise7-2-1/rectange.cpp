#include "rectange.h"

rectange::rectange() {
	width = 1;
	height = 1;
}

rectange::rectange(double width, double height, string color) {
	this->width = width;
	this->height = height;
	this->colors = color;
}

rectange::~rectange()
{

}

void rectange::setWidth(double width)
{
	this->width = width;
}

double rectange::getWidth() {
	return this->width;
}

void rectange::setHeight(double height) {
	this->height = height;
}

double rectange::getHeight()
{
	return this->height;
}

void rectange::setColor(string color) {
	this->colors = color;
}

string rectange::getColor()
{
	return this->colors;
}

double rectange::findArea() {
	return (this->width * this->height);
}

double rectange::findPerimeter() {
	return (2 * (this->width + this->height));
}




