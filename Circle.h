#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Figure.h"

using namespace std;

class Circle : public Figure {
private:
	float R;
public:
	Circle();
	Circle(float _R);
	Circle(const Circle &obj);

	void print() const;
	float square() const;
	float perimeter() const;

	bool SetR( float _R );
	float GetR() const;

	Circle & operator=(const Circle &o);
};

#endif //CIRCLE_H_INCLUDED
