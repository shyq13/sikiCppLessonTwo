#include "Cuboid.h"

Cuboid::Cuboid(double length, double width, double height)
{
	length_ = length;
	width_ = width;
	height_ = height;
}

int Cuboid::compare(Cuboid& c)
{
	if (this->volume() > c.volume()) {
		return 0;
	}
	else if (this->volume()/* this÷∏’Î */ == c.volume()) {
		return 1;
	}
	else {
		return 2;
	}
}

