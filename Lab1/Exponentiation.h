#pragma once
#include "Operation.h"

//class that allows for exponentiation
class Exponentiation: public Operation{
public:
	Exponentiation(const double base, const double argument): _base(base), _argument(argument) {}	//general-use constructor
	~Exponentiation() = default;	//simple destructor
	double eval() const;			//returns _base raised to the power of _argument
	void print() const;				//prints the operation to screen
protected:
	double _base;
	double _argument;
};


