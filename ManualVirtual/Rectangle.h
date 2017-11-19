#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle {
public:
	//int area() { return m_width * m_height; }
	//void whoAmI() { cout << "Rectangle whoAmI.\n"; }
	Rectangle(int w, int h) :Quadrangle(w, h) {}

};
