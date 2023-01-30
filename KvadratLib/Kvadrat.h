#pragma once

class Kvadrat
{
public:
	Kvadrat(int size);

	int GetArea();
	int GetPerimeter();
	int Size();

private:
	int _size;
};
