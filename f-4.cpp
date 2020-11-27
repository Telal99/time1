/*
My name : Telal Almubarak Abdualgbar ALhussian
Class : second
Department:computer */
// this program to find the area and perimeter of the following geometric shape(triangle , rectangle ,circle,polygon , ellipse)
// header for definintion of output and input operations
#include <iostream>
#include <cmath>
#include <cstring>
// making everything under std namespace available without the prefix
using namespace std;
//inserting constants , variables and values
char shape[20];
float area, rib, circumference, rib1, apothem, rib2, rib3, height, width, length, base, radius, diameter, angle;
//use double because there may be some fractures
double const pi = 3.14159;
int main()
// define objects that we are going to use for input and output
{
	loop:
//use the loop to find shapes
	cout << "Shapes: \nTriangle, Rectangle, Square, Circle, Polygon, Ellipse" << endl;
	cout << "\nChoose your geometric shape: ";
	cin >> shape;
	if (strcmp(shape, "Triangle") == 0){
//inserting value the base length
		cout << "Enter Triangle's base length: ";
		cin >> base;
		cout << "Enter Triangle's height length: ";
//inserting value the height length
		cin >> height;
//inserting value angle the first side in triangle
		cout << "Enter the first side Triangle's length: ";
		cin >> rib1;
//inserting value angle the second  side in triangle
		cout << "Enter the second side Triangle's length: ";
		cin >> rib2;
//inserting value angle the third side in triangle
		cout << "Enter the third side Triangle's length: ";
		cin >> rib3;
		area = 0.5 * base * height;
		circumference = rib1 + rib2 + rib3;
	}
	else if (strcmp(shape, "Rectangle") == 0){
		cout << "Enter Rectangle's width value: ";
		cin >> width;
		cout << "Enter Rectangle's height value: ";
		cin >> height;
		area = width * height;
		circumference = 2 * (height + width);
	}
	else if (strcmp(shape, "Squire") == 0){
		cout << "\nYou have choosed Square!\n\n";
		cout << "Enter side Square's length value: ";
		cin >> length;
		area = length * length;
		circumference = 4 * length;
	}
	else if (strcmp(shape, "Circle") == 0){
		cout << "\nYou have choosed Circle!\n\n";
		cout << "Enter Circle's radius value: ";
		cin >> radius;
		area = pi * radius * radius;
		circumference = 2 * pi * radius;
	}
	else if (strcmp(shape, "Polygon") == 0){
		cout << "\nYou have choosed Polygon!\n\n";
		cout << "Enter Polygon's apothem value: ";
		cin >> apothem;
		cout << "Enter Polygon's side length value: ";
		cin >> length;
		area = 0.5 * apothem * 5 * length;
		circumference = length * 5;
	}
	else if (strcmp(shape, "Ellipse") == 0){
		double maj,min;
		cout << "\nYou have choosed Ellipse!\n\n";
		cout << "Enter Ellipse's Major Axis value: ";
		cin >> maj;
		cout << "Enter Ellipse's Minor Axis value: ";
		cin >> min;
		area = pi * maj * min;
		circumference = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);
	}
	else {
		cout << "\nWrong choice\n";
		goto loop;
	}
	cout << "\n" << shape << "Area is: " << area << endl;
	cout << shape << "Circumference is: " << circumference << endl;
	return 0;
}
