#include <iostream>
#include "Bird.h"
#include <cstdlib>
#include <cmath>
#define PI 3.1415
#define MAX_SPEED 5.0
using namespace std;




Bird::Bird(double n, double m) {
	p.randomize(0.0, n, 0.0, m);
	speed = randomNum();
}

Bird::Bird(double speed_, double n, double m) {
	p.randomize(0.0, n, 0.0, m);
	speed = speed_;
}

double Bird::whereIsBirdX() {
	return p.getX();
}

double Bird::whereIsBirdY() {
	return p.getY();
}
double Bird::whereIsBirdAngle() {
	return p.getAngle();
}

bool Bird::intersect(Bird& b, double eyeshight) {
	return sqrt(pow(b.whereIsBirdX() - p.getX, 2) + pow(b.whereIsBirdY - p.getY(), 2)) <= (eyeshight * 2);
}

void Bird::setSpeed(double newSpeed) {
	speed = newSpeed;
}

void Bird::project(Bird* birds, int cantBirds, double eyeshight, double jiggleL, int same) {
	int birdsIntersect = 0;
	int angleSum = 0;
	for (int i = 0; i < cantBirds; i++) {
		if (this->intersect(birds[i], eyeshight) && i != same) {
			angleSum += birds[i].whereIsBirdAngle();
			birdsIntersect++;
		}
	}
	this->newAngle = angleSum;

}

void Bird::moveBird(int n, int m) {
	/*
	double deltaToDoX;
	double deltaToDoY;
	double x_ = cos((PI / 180)*newAngle)*speed;
	double y_ = sin((PI / 180)*newAngle)*speed;
	if (x_ < 0) {
		deltaToDoX = x_;
		if (newAngle > 180) {
			//deltaDone = sqrt(pow(whereIsBirdX(), 2) + pow(whereIsBirdY(), 2));
			deltaToDoY = y_ - whereIsBirdY() - tan(180 - newAngle)*whereIsBirdX();
			y_ = deltaToDoY;
			x_ = (whereIsBirdX() + tan(3 / 2 * PI - newAngle)*whereIsBirdY()) -deltaToDoX;
		}
		if (newAngle == 180) {
			x_ = n - deltaToDoX;
		}
		else {
			deltaToDoY = whereIsBirdY() - y_ - tan(180 - newAngle)*whereIsBirdX();
			y_ = deltaToDoY;
			x_ = (whereIsBirdX() + tan(180 - newAngle)*(m - whereIsBirdY()))-deltaToDoX;

		}
	}
	if (x_ > n) {
		deltaToDoX = n - x_;
		if (newAngle < 90 && newAngle!=0) {
			deltaToDoX = n - x_;
			x_ = deltaToDoX;
			deltaToDoY = whereIsBirdY() - y_ - tan(newAngle)*x_;
			y_ = whereIsBirdY() + tan(newAngle)*whereIsBirdX() - deltaToDoY;
		}
		if (newAngle == 0) {

		}
		if (newAngle>180) {
			x_ = deltaToDoX;
			deltaToDoY = y_ - tan(360 - newAngle)*(n - whereIsBirdX());
			y_ = whereIsBirdY() - tan(360 - newAngle)*whereIsBirdX() + deltaToDoY;
		}
	if



	}
	/*cambiar teniendo en cuenta lo limites*/
	p.setEverything(x_, y_, newAngle);
}
*/

double Bird::randomNum() {
	return (MAX_SPEED - 0) * ((double)rand() / (double)RAND_MAX);
}