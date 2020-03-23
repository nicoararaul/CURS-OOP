#include "Shape.h"
#include <iostream>
#include <vector>

Shape::Shape()
{

}
Shape::Shape(std::string s, double surface)
{
	this->name = s;
	this->flaeche = surface;
}
std::string Shape::getterName()
{
	return this->name;
}
void Shape::setterName(std::string a)
{
	this->name = a;
}
double Shape::getterFlaeche()
{
	return this->flaeche;
}
void Shape::setterFlaeche(double a)
{
	this->flaeche = a;
}