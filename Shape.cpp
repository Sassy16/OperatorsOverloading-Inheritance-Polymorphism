#include "Shape.h"

Shape::Shape(const char* sn = "noName") {
	m_shapeName = new char[strlen(sn) + 1];
	strcpy(m_shapeName, sn);
	m_centerPoint.setPoint(0, 0);
}		

Shape::Shape(const Shape& other) {
	m_shapeName = new char[strlen(other.m_shapeName) + 1];
	strcpy(m_shapeName, other.m_shapeName);
	m_centerPoint.setPoint(other.m_centerPoint);
}

Shape::~Shape() {
	delete[] m_shapeName;
}	

void Shape::setName(const char* name) {
	delete[] m_shapeName;
	m_shapeName = nullptr;
	m_shapeName = new char[strlen(name) + 1];
	strcpy(m_shapeName, name);
}					

void Shape::setCenter(const Point& p) {
	m_centerPoint.setPoint(p);
}					

const char* Shape::getName() const {
	return m_shapeName;
}

Point Shape::getCenter() const {
	return m_centerPoint;
}

void Shape::setShape(const char* sn, const Point& other) {
	setName(sn);
	setCenter(other);
}

const Shape& Shape::operator=(const Shape& other) {
	setName(other.m_shapeName);
	setCenter(other.m_centerPoint);
}

