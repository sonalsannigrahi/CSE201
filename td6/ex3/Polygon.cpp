#include "Polygon.hpp"

Geometry::Polygon::Polygon(std::string lab, int a)
	:Geometry::Shape:: Shape(lab){
		vertexCount = a;

}


int Geometry::Polygon::getVertexCount() const{
	return vertexCount;
}
