#pragma once
#include<iostream>
#include<cmath>

using std::cout;
using std::endl;

//Abstract operation class, base for futher class inheritance
class Operation{
public:
	Operation() = default;		//default constructor
	virtual ~Operation() = default;		//default destructor
	virtual double eval() const = 0;	//abstract method for evaluation of actual value
	virtual void print() const = 0;	//abstract method for printing operation to console
};

void operator>>=(const char* text, const Operation& d);		//a method for printing operation in a manner so that it is "encased" with given text from both sides

