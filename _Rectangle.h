#ifndef _RECTANGLE_H_INCLUDED
#define _RECTANGLE_H_INCLUDED

#include "Figure.h"

using namespace std;

class _Rectangle : public Figure {
private:
	float a, b; //стороны
public:
	_Rectangle();
	_Rectangle(float _a, float _b);
	_Rectangle(const _Rectangle &obj);

	void print() const;
	float square() const;
	float perimeter() const;

	bool SetA(int _a);
	float GetA() const;
	bool SetB(int _b);
	float GetB() const;

	_Rectangle & operator=(const _Rectangle &o);
};

#endif //_RECTANGLE_H_INCLUDED
