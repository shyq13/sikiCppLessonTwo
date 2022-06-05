#pragma once

#ifndef CUBOID_H_
#define CUBOID_H_

#include <iostream>
using namespace std;

class Cuboid
{
private:
	double length_;
	double width_;
	double height_;
public:
	Cuboid();
	~Cuboid();
	Cuboid(double length, double width, double height);
	double volume() { return length_ * width_ * height_; };
	int compare(Cuboid& c);
};

#endif