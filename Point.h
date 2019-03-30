#pragma once

class Point {
public:
	Point();
	double getX();
	double getY();
	double getAngle();
	void randomize(double minX, double maxX, double minY, double maxY);
	void setEverything(double x_, double y_, double angle_);

private:
	double x;
	double y;
	double angle;
	double random(double min, double max);
};


