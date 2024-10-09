#include<iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

//Judgment point and circle position relationship
void isInCircle(Circle &c, Point &p) {

	int distance = (c.getCenter().getAxis_X() - p.getAxis_X()) * (c.getCenter().getAxis_X() - p.getAxis_X()) +
					(c.getCenter().getAxis_Y() - p.getAxis_Y()) * (c.getCenter().getAxis_Y() - p.getAxis_Y());

	int rDistance = c.getRadius() * c.getRadius();

	if (distance == rDistance)		cout << "点在圆上" << endl;
	else if (distance > rDistance)	cout << "点在圆外" << endl;
	else							cout << "点在圆内" << endl;

}


int main() {
	//Create a circle
	Circle c;
	c.setRadius(5);
	Point center;
	center.setAxis_X(10);
	center.setAxis_Y(0);
	c.setCenter(center);

	//Create a point
	Point p;
	p.setAxis_X(10);
	p.setAxis_Y(7);

	isInCircle(c, p);


	system("pause");
}
