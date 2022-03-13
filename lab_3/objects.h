#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Circle
{
private: 
	double x, y, radius;
	string name;
public:
	Circle() {
		x = 0;
		y = 0;
		radius = 1;
		name = "Circle";
	}
	Circle(double start_x, double start_y, double start_r, string start_name) {
		x = start_x;
		y = start_y;
		radius = start_r;
		name = start_name;
	}
	double get_area();
	double get_perimeter();
	double get_diameter();
	double get_radius();
	double get_x();
	double get_y();
	string get_name();
	void move(double mx, double my);
	void set_x(double cx);
	void set_y(double cy);
	void change_radius(double cr);
	void change_name(string new_name);
};

class Vector {
	double x, y;
public:
	Vector() {
		x = 0;
		y = 0;
	}
	Vector(double start_x, double start_y)
	{
		x = start_x;
		y = start_y;
	}
	friend Vector operator +(Vector first, Vector second);
	friend Vector operator -(Vector first, Vector second);
	friend Vector& operator +=(Vector &v1, const Vector &v2);
	friend double operator *(Vector v1, Vector v2);
	friend Vector operator *(Vector v, double a);
	friend Vector& operator *=(Vector &v, double a);
	friend Vector& operator *=(double a, Vector& v);
	double get_length();
	double get_angle();
	void print_decart();
	void print_polar();
};