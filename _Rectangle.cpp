#include "_Rectangle.h"

_Rectangle::_Rectangle() : Figure(), a(0), b(0) {}
_Rectangle::_Rectangle(float _a, float _b) : a(_a), b(_b) {}
_Rectangle::_Rectangle(const _Rectangle &obj)
{
	a = obj.a;
	b = obj.b;
}

void _Rectangle::print() const {
	cout << "a: " << a << "; " << "b: " << b << "; ";
}
float _Rectangle::square() const {
    cout << " square = ";
	return a * b;
}
float _Rectangle::perimeter() const {
    cout << "perimeter = ";
	return 2 * (a + b);
}

bool _Rectangle::SetA (int _a)
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

float _Rectangle::GetA() const{
	return a;
}
bool _Rectangle::SetB(int _b)
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
float _Rectangle::GetB() const{
	return b;
}

_Rectangle & _Rectangle::operator=(const _Rectangle &o) {
	this->a = o.a, this->b = o.b;
	return *this;
}
