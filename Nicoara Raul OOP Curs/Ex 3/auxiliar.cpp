#include <iostream>
#include "auxiliar.h";
#include <string>

void apply(std::vector<Shape*> v, void(f)(Shape*))
{
	int i = 0;
	while (i < v.size())
	{
		f(v[i]);
		i++;
	}
}

void mult(Shape* a)
{
	double b = a->getterFlaeche();
	b = b * 10;
	std::cout << b << " ";
	a->setterFlaeche(b);
}

void div(Shape* a)
{
	double b = a->getterFlaeche();
	b = b / 2;
	std::cout << b << " ";
	a->setterFlaeche(b);
}

void tostring(Shape* a)
{
	std::string b = a->getterName()+" " + std::to_string(a->getterFlaeche()) + "!"+ " ";
	std::cout << b;
}