#pragma once
#include "Operation.h"

//class for operation that allows summation of an array of doubles
class SumOfElements: public Operation{
public:
	SumOfElements(const double* elementArray, const int elementAmount): _array(elementArray), _amount(elementAmount) {}		//general-use constructor
	~SumOfElements() = default;	//simple destructor
	double eval() const;		//returns sum of [_amount] the elements in array
	void print() const;			//prints the operation to the screen
protected:
	const double* _array;
	int _amount;
};


