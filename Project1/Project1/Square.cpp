#include "Square.h"

// construct the square by setting the side length
Square::Square(int sideLength)
{
	Square::sideLength = sideLength;
}


int Square::getPerimeter()
{
	return Square::sideLength * 4;
}

int Square::getSideLength()
{
	return Square::sideLength;
}



/* Overloaded Operators - compare Squares based on perimeter */

bool Square::operator>(Square& other)
{
	return this->getPerimeter() > other.getPerimeter();
}

bool Square::operator<(Square& other)
{
	return this->getPerimeter() < other.getPerimeter();
}

bool Square::operator==(Square& other)
{
	return this->getPerimeter() == other.getPerimeter();
}

bool Square::operator!=(Square& other)
{
	return this->getPerimeter() != other.getPerimeter();
}