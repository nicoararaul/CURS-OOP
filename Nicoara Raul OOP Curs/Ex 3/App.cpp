#include <iostream>
#include <vector>
#include "Shape.h"
#include "auxiliar.h"

int main()
{
	std::vector<Shape*>v(10);
	Shape* a = new Shape("Cerc", 3);
	Shape* b = new Shape("Patrat", 5);
	Shape* c = new Shape("Dreptunghi", 7);

	v = { a, b, c };
	
	apply(v, mult);
	std::cout << std::endl;
	apply(v, div);
	std::cout << std::endl;
	apply(v, tostring);

	return 0;
}