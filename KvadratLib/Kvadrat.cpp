#include "pch.h"
#include "Kvadrat.h"

Kvadrat::Kvadrat(int size)
{
	_size = size;
}

int Kvadrat::GetArea()
{
	return _size * _size;
}

int Kvadrat::GetPerimeter()
{
	return 4 * _size;
}

int Kvadrat::Size()
{
	return _size;
}
