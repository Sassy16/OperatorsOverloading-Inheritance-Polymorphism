#include "allShapes.h"

allShapes::allShapes() {
	m_size = 0;
	m_arr = nullptr;
}				

allShapes::allShapes(const allShapes& other) {
	m_size = other.m_size;
	m_arr = new Shape*[other.m_size];
	for (int i = 0; i < other.m_size; i++) {
		m_arr[i] = other.m_arr[i];
	}
}

allShapes::~allShapes() {
	delete[] m_arr;
}

int allShapes::getSize() const {
	return m_size;
}

void allShapes::addShape(Shape* newShape) {

}	//add a new shape (deep copy) to the end of array
void removeShape(int index);		//remove shape by index
int totalArea() const;				//returns the total area of all the shapes (rounded to int)
int totalPerimeter() const;			//returns the total Perimeter of all the shapes (rounded to int)
int totalCircleArea() const;		//returns the total sum of circle areas (rounded to int)
int totalSquarePerimeter() const;	//returns the total sum of squar Perimeter (rounded to int)