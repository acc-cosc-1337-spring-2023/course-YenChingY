//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	Shape shape;
	shape.draw();

	Line line;
	line.draw();

	Circle circle;
	circle.draw();

	Shape* shape_ptr;
	shape_ptr = &line;
	shape_ptr->draw();

	shape_ptr = &circle;
	shape_ptr->draw();

	return 0;
}