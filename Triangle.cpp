#include "Triangle.h"

Triangle::Triangle() : Figure(), a(0),b(0),c(0) {}
Triangle::Triangle(float _a, float _b, float _c) : a(_a), b(_b), c(_c) {}
Triangle::Triangle(const Triangle &obj) {
	a = obj.a;
	b = obj.b;
	c = obj.c;
}

void Triangle::print() const{
	cout << "a: " << a << "; " << "b: " << b << "; " << "c: " << c << ";";
}
float Triangle::square() const{
	float p;
	p = (a + b + c)*0.5;
	cout << "square = ";
	return sqrt(p * (p - a) * (p - b) * (p - c)); //формула Герона
}
float Triangle::perimeter() const{
    cout << "perimeter = ";
	return a + b + c;
}

bool Triangle::SetA (float _a)
{
    if (_a < 0)
    {
       return false;
    }
    else
        {
            a = _a;
            return true;
        }
}
float Triangle::GetA() const{
	return a;
}
bool Triangle::SetB (float _b)
{
    if (_b < 0)
    {
       return false;
    }
    else
        {
            b = _b;
            return true;
        }
}
float Triangle::GetB() const{
	return b;
}
bool Triangle::SetC (float _c)
{
    if (_c < 0)
    {
       return false;
    }
    else
        {
            c = _c;
            return true;
        }
}
float Triangle::GetC() const{
	return c;
}

Triangle & Triangle::operator=(const Triangle &o) {
	this->a = o.a, this->b = o.b, this->c = o.c;
	return *this;
}
