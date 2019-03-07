#include "Exponentiation.h"

double Exponentiation::eval() const{
	return pow(_base,_argument);
}

void Exponentiation::print() const{
	cout << _base << " ^ " << _argument;
}
