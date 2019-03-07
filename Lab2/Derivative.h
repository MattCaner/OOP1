#pragma once
#include"Function.h"

class Derivative: public Function{					//Class for a derivative. Derivative is treated as function. D(x) = f'(x)
public:
	Derivative (const Function* f): _last_f_user(true), _f(f) {}		// general-use constructor
	~Derivative() {if(_last_f_user) delete _f;}		//destructor. In case this is the last user of function pointer, it will be deleted, 
													//else nothing will happen (deletion will be performed by another instance)
	
	void set_dx(double dx) {_dx = dx;}				//resets derivation step to given double value
	double operator()(double x) const;				//allows the use of this class as a functor. Returns numerically (primitively) obtained value.

	//Assignment
	Derivative& operator=(Derivative& d);			//copy constructor. Please notice that it requires non-const reference for the sake of transferring function pointer.

private:
	bool _last_f_user;					//a control variable. Any time a copy constructor is used, _last_f_user is transferred (this helps the mess with destructors).
	const Function* _f;					//f(x)
	double _dx;							//numerical derivation step
};
