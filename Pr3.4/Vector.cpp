#include "Vector.h"

Vector::Vector() {
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(double xb, double yb, double zb, double xe, double ye, double ze) {
	x = xe - xb;
	y = ye - yb;
	z = ze - zb;
}

Vector::Vector(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector::set(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector::setX(double x) {
	this->x = x;
}

void Vector::setY(double y) {
	this->y = y;
}

void Vector::setZ(double z) {
	this->z = z;
}

double Vector::getX() {
	return x;
}

double Vector::getY() {
	return y;
}

double Vector::getZ() {
	return z;
}

double Vector::getLength() {
	return sqrt(x * x + y * y + z * z);
}

void Vector::add(Vector &vector) {
	x += vector.getX();
	y += vector.getY();
	z += vector.getZ();
}

double Vector::algProd(Vector &vector) {
	return x * vector.getX() + y * vector.getY() + z * vector.getZ();
}

void Vector::geomProd(Vector &vector) {
	double x1 = x;
	double y1 = y;
	double z1 = z;
	x = y1 * vector.getZ() - vector.getY() * z1;
	y = z1 * vector.getX() - vector.getZ() * x1;
	z = x1 * vector.getY() - vector.getX() * y1;
}

void Vector::prod(double a) {
	x *= a;
	y *= a;
	z *= a;
}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

