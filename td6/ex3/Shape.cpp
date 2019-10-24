#include "Shape.hpp"


Geometry::Shape::Shape(std::string lab){
	label = lab;
}

void Geometry::Shape:: setLabel(std::string lab){
	label = lab;
}

std::string Geometry::Shape:: getLabel() const{
	return label;
}

