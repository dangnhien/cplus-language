
#include <iostream>
#include <string>
#include <iomanip>
#include "rectange.h"

using namespace std;


void inputData(rectange& rectange_first);
void outputData(rectange rectange_first);

int main()
{
	rectange rec1;

	inputData(rec1);
	outputData(rec1);

	return 0;
}

void inputData(rectange& rectange_first)
{
	double width_input, height_input;
	string color_input;

	cout << "\nInput width rectange: ";
	cin >> width_input;

	cout << "\nInput height rectange: ";
	cin >> height_input;

	while ((getchar()) != '\n');
	cout << "\nInput color rectange: ";
	getline(cin, color_input);

	rectange_first.setWidth(width_input);
	rectange_first.setHeight(height_input);
	rectange_first.setColor(color_input);
}


void outputData(rectange rectange_first)
{
	cout << setw(15) << "width"
		<< setw(15) << "height"
		<< setw(15) << "color" << "\n";

	cout << setw(15) << rectange_first.getWidth()
		<< setw(15) << rectange_first.getHeight()
		<< setw(15) << rectange_first.getColor();

	cout << setw(15) << "\nArea: " << rectange_first.findArea();
	cout << setw(15) << "\nPerimeter: " << rectange_first.findPerimeter();
}