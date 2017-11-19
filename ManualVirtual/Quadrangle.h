#pragma once

#include <iostream>
using namespace std;

class Quadrangle {
protected:
	int m_width, m_height;
public:
	Quadrangle(int w, int h):m_width(w), m_height(h){}
	void setSize(int w, int h){ m_width = w; m_height = h; }
	virtual int area() { return m_width * m_height; }

	virtual void whoAmI() { cout << "Quadrangle whoAmI.\n"; }


};