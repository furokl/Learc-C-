#pragma once
#include <iostream>
class Shape
{
public:
	virtual ~Shape() 
	{
	}

	friend std::ostream &operator<<(std::ostream &out, const Shape &shape) {
		return shape.print(out);
	}

	virtual std::ostream &print(std::ostream &out) const = 0;
};