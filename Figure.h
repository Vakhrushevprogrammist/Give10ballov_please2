#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

class Figure {
public:
	virtual void print() const = 0;
	virtual float square() const = 0;
	virtual float perimeter() const = 0;

};

#endif //FIGURE_H_INCLUDED
