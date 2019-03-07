#pragma once
#include"Function.h"

class Quadratic: public Function{
public:
	Quadratic(double a, double b, double c): _a(a), _b(b), _c(c) {}		//general-use constructor, enforces choice of coefficients
	double operator() (double x) const;									//allows the use of this class as a functor
private:
	double _a;			//quadratic coefficients
	double _b;
	double _c;
};
