#pragma once
#include "Quadrangle.h"

class Square : public Quadrangle {
public:
	Square(int s) :Quadrangle(s, s) {}
	int area() { return m_width * m_width;}

	void whoAmI() { cout << "Square whoAmI.\n"; }
};