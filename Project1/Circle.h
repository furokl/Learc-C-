#pragma once
#include "Point.h"
#include "Shape.h"
class Circle: public Shape
{
private:
	Point m_o;
	int m_r;

public:
	Circle(Point o, int r)
		: m_o(o), m_r(r)
	{
	}

	int getRadius() const { return m_r; }

	virtual std::ostream &print(std::ostream &out) const {
		out << "Circle(" <<
			m_o << ", radius " << m_r << ')' << '\n';
		return out;
	}
};