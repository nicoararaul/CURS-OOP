#pragma once
#include<iostream>
#include <vector>

class Shape
{
private:
	std::string name;
	double flaeche;
public:
	Shape();
	Shape(std::string, double);
	std::string getterName();
	void setterName(std::string);
	double getterFlaeche();
	void setterFlaeche(double);
};
