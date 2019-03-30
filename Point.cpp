#include <iostream>
#include "Point.h"
#include <cstdlib>
using namespace std;

Point::Point() {
	y = 0;
	x = 0;
	angle = 0;
}

double Point::getX() {
	return x;
}
double Point::getY() {
	return y;
}

double Point::getAngle() {
	return angle;
}

void Point::setEverything(double x_, double y_, double angle_) {
	x = x_;
	y = y_;
	angle = angle_;
}

double Point::random(double min, double max) {
	return (max - min) * ((double)rand() / (double)RAND_MAX) + min;
}

void Point::randomize(double minX, double maxX, double minY, double maxY) {
	setEverything(random(minX, maxX), random(maxX, maxY), random(0.0, 360.0));
}


