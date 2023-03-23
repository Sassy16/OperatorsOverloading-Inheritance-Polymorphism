#include "point.h"

Point::Point(int x = 0, int y = 0) {
	m_x = x;
	m_y = y;
}

Point::Point(const Point& other) {
	setPoint(other);
}

Point::~Point() {}

int Point::getX() const {
	return m_x;
}

int Point::getY() const {
	return m_y;
}

void Point::setX(int x) {
	m_x = x;
}

void Point::setY(int y) {
	m_y = y;
}

void Point::setPoint(int x, int y) {
	setX(x);
	setY(y);
}

void Point::setPoint(const Point& other) {
	setPoint(other.m_x, other.m_y);
}

bool Point::operator==(const Point& other) const {
	return m_x == other.m_x && m_y == other.m_y;
}

bool Point::operator!=(const Point& other) const {
	return !(*this == other);
}

Point Point::operator+(int num) const {
	return Point(m_x + num, m_y + num);
}

const Point& Point::operator+=(int num) {
	setPoint(m_x + num, m_y + num);
	return *this;
}

Point::operator int() const {
	return m_x + m_y;
}
Point Point::operator+(const Point& other) const {
	return Point(m_x + other.m_x, m_y + other.m_y);
}

Point Point::operator++(int) {
	Point tmp = *this;
	*this += 1;
	return tmp;
}

const Point& Point::operator++() {
	*this += 1;
	return *this;
}

Point operator*(int num, const Point& other) {
	return Point(other.getX() * num, other.getY() * num);
}