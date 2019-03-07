#include"Operation.h"

void operator>>=(const char* text, const Operation& d)
{
	cout << text << " ";
	d.print();
	cout << " " << text << endl;
}
