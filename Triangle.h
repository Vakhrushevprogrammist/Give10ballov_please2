#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include <cmath>
#include "Figure.h"

using namespace std;

class Triangle : public Figure {
private:
	float a,b,c; //стороны
public:
	Triangle();
	Triangle(float _a,float _b,float _c);
	Triangle(const Triangle &obj);

	void print() const;
	float square() const;
	float perimeter() const;

	bool SetA(float _a);
	float GetA() const;
	bool SetB(float _b);
	float GetB() const;
	bool SetC(float _c);
	float GetC() const;

	Triangle & operator=(const Triangle &o);
};

#endif //TRIANGLE_H_INCLUDED
