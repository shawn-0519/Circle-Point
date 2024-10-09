#include"Circle.h"
#include"Point.h"

void Circle::setCenter(Point center) {
	m_center = center;
}
Point Circle::getCenter() {
	return m_center;
}
void Circle::setRadius(int r) {
	m_radius = r ;

}
int Circle::getRadius() {
	return m_radius;
}