#pragma once
#include "Operation.h"

//class for a simple two-double division
class Division: public Operation{
public:
	Division(const double num, const double den): _num(num), _den(den) {}	//general-use constructor
	~Division() = default;			//simple destructor
	double eval() const;			//returns _num/_den
	void print() const;				//prints the operation to the screen
protected:
	double _num;
	double _den;
};
