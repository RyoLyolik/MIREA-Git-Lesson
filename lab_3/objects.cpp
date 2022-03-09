#include "objects.h"
#include <cmath>
#include <corecrt_math_defines.h>
#define _USE_MATH_DEFINES
double Circle::get_area() {
	return M_PI * radius * radius;
}
double Circle::get_perimeter() {
	return 2 * M_PI * radius;
}
double Circle::get_diameter() {
	return 2 * radius;
}
double Circle::get_x() {
	return x;
}
double Circle::get_y()
{
	return y;
}
string Circle::get_name()
{
	return name;
}
void Circle::move(double mx, double my) {
	x += mx;
	y += my;
}
void Circle::set_x(double cx) {
	x = cx;
}
void Circle::set_y(double cy) {
	y = cy;
}
void Circle::change_radius(double cr) {
	radius = cr;
}
void Circle::change_name(string new_name) {
	name = new_name;
}

//Vector
double Vector::get_length() {
	return sqrt(x*x+y*y);
}
double Vector::get_angle() {
	if (x == 0)
	{
		return 0;
	}
	else if (x > 0 && y > 0)
	{
		return atan(y / x);
	}
	else if (x > 0 && y <= 0)
	{
		return 2*M_PI - atan(x / (abs(y)));
	}
	else if (x < 0 && y >= 0)
	{
		return M_PI - atan(abs(x) / y);
	}
	else if (x < 0 && y <= 0)
	{
		return 2 * M_PI - atan(abs(x) / abs(y));
	}
}
Vector operator + (Vector first, Vector second)
{
	return Vector{ first.x + second.x, first.y +second.y };
}
Vector operator - (Vector first, Vector second)
{
	return Vector{ first.x - second.x, first.y - second.y };
}
Vector& operator +=(Vector& v1, const Vector& v2)
{
	v1.x += v2.x;
	v1.y += v2.y;
	return v1;
}
void Vector::print_decart() {
	cout << x << " " << y << endl;
}
void Vector::print_polar()
{
	cout << this->get_length() << " " << this->get_angle() << endl;
}
double operator *(Vector v1, Vector v2)
{
	return v1.x * v2.x + v1.y * v2.y;
}
Vector operator *(Vector v, double a)
{
	v.x *= a;
	v.y *= a;
	return v;
}
Vector& operator *=(Vector &v, double a)
{
	v.x *= a;
	v.y *= a;
	return v;
}
Vector& operator *=(double a, Vector& v)
{
	v.x *= a;
	v.y *= a;
	return v;
}