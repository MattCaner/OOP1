#include "Division.h"

double Division::eval() const{
	return _num/_den;	
}

void Division::print() const{
	cout << _num << " / " << _den;
}

