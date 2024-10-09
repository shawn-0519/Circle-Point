#pragma once
#include<iostream>
#include"point.h"
using namespace std;


class Circle {

public:
	void setCenter(Point center);
	//**** use POint ****//
	Point getCenter();

	void setRadius(int r);
	int getRadius();


private:

	Point m_center;
	int m_radius;

}; 
