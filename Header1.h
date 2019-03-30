#pragma once
#include "Point.h"

class Bird {
public:
	Bird(double speed, double n, double m);
	Bird(double n, double m);
	void project(Bird* birds, int cantBirds, double eyeshight, double jiggleL, int same);
	double whereIsBirdX();
	double whereIsBirdY();
	double whereIsBirdAngle();
	void setSpeed(double newSpeed);
	void moveBird(int n, int m);

private:
	Point p;
	double newAngle;
	int speed;
	bool intersect(Bird& b, double eyeshight); /*devuelve true si dos pajaros se influencian*/
	double randomNum();
};

