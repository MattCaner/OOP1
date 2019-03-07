#include"Quadratic.h"

double Quadratic::operator() (double x) const{
	return _a*x*x+_b*x+_c;
}
