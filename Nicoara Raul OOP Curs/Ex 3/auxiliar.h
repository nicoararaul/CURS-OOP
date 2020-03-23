#pragma once
#include <iostream>
#include "Shape.h";
#include <string.h>



void apply(std::vector<Shape*> v, void(f)(Shape*));
void mult(Shape* a);
void div(Shape* a);
void tostring(Shape* a);



