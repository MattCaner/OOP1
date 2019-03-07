#include"Sin.h"

double Sin::operator() (double x) const{
	return sin(x*_a);
}
