#include "SumOfElements.h"

double SumOfElements::eval() const{
	double sum = 0;
	for(int i = 0; i<_amount; i++) sum+= _array[i];
	return sum;
}

void SumOfElements::print() const{
	if(_amount==0) return;
	
	cout << _array[0];
	for(int i = 1; i<_amount; i++){
		cout << " + " << _array[i];
	}
}


