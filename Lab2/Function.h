#pragma once
#include<cmath>			//this include ensured more complex functions can be implemented with access to math library

//It is advised keep in mind that double is not 100% accurate representation
//of decimal numbers and therefore results may very slightly vary when
//the program is run on different machines.

class Function{									//basic abstract class for other functions to inherit from.
public:
	Function() = default;							//constructor
	virtual double operator() (double x) const = 0;	//basic virtual function that allows using this class as functor.
	virtual ~Function() = default;					//virtual destructor
};
