#include "Circle.h"

Circle::Circle(double r = 1, const char* sn = "noName") : Shape(sn) {
	m_radius = r;
}

Circle::Circle(const Circle& other) {
	*this = other;
}

Circle::~Circle() {}			

double Circle::getRadius() const {
	return m_radius;
}

void Circle::setRadius(double r) {
	m_radius = r;
}

int Circle::calcArea() const {
	return (int)PI * m_radius * m_radius;
}

int Circle::calcPerimeter() const {
	return (int)2 * PI * m_radius;
}

Circle operator+(int r, const Circle& other) {
	Circle* tmp = new Circle(other);
	tmp->setRadius(tmp->m_radius + r);
	return *tmp;
}
const Circle& Circle::operator=(const Circle& other) {
	setName(other.getName());
	setCenter(other.m_centerPoint);
	setRadius(other.m_radius);
	return *this;
}
const Circle& Circle::operator=(const char* name) {
	setName(name);
	return *this;
}
