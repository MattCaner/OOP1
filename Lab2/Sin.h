#pragma once
#include"Function.h"

class Sin: public Function{
public:
	Sin(double a): _a(a) {}				//general-use constructor
	double operator()(double x) const;			//allows the use of this class as a functor
private:
	double _a;				//scalar coefficient multiplying the argument.
};
