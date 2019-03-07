#include"Derivative.h"

double Derivative::operator() (double x) const{
	return ((*_f)(x+_dx)-(*_f)(x-_dx))/(2*_dx);
}

Derivative& Derivative::operator=(Derivative& d){
	if (&d==this) return *this;
	if(_last_f_user) delete _f;		//in case this is the last user of it's own pointer, delete it.
	_last_f_user=true;				//this instance shall become last user of its own pointer...
	d._last_f_user=false;			//...while the one we are copying is no longer last user of its own pointer.
	_f = d._f;						//finally, the pointer can be copied.
	return *this;
}
