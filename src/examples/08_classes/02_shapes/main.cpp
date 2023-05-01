//main
#include <iostream>
#include "shape.h"
#include "line.h"
#include "circle.h"

int main() 
{
	const auto SIZE = 3;
	Circle circles[SIZE];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	Line lines[SIZE];

	for (auto line: lines)
	{
		line.draw();
	}

	Shape* shapes = circles;//not dynamic memory. pointer point to the data of memory
	shapes->draw();

	shapes = lines;//point to another object
	shapes->draw();


	/*unique_ptr<Shape> shape = make_unique<Line>();
	shape->draw();
	unique_ptr<Shape> shape1 = make_unique<Circle>();
	shape1->draw();

	vector<unique_ptr<Shape>> shapes;
	shapes.push_back(std::move(shape));
	shapes.push_back(std::move(shape1));

	for(auto& shape:shapes)
	{
		shape->draw();
	}
	*/

	/*Shape* shape;//create dynamic memory

	shape = new Line();//create dynamic memory
	shape->draw();
	delete shape;

	shape = new Circle();
	shape->draw();
	delete shape;*/

	/*Shape shape;
	shape.draw();

	Line line;
	line.draw();

	Circle circle;
	circle.draw();

	Shape* shape_ptr;
	shape_ptr = &line;
	shape_ptr->draw();

	shape_ptr = &circle;
	shape_ptr->draw();*/

	return 0;
}