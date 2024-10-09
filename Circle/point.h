#pragma once
#include<iostream>
using namespace std;

class Point {

public:
	void setAxis_X(int x);
	int getAxis_X();
	void setAxis_Y(int y);
	int getAxis_Y();

private:
	int Axis_X;
	int Axis_Y;

};