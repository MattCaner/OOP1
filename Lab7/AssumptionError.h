#pragma once
#include<string>
#include<iostream>
#include"MatrixException.h"

//class for handling wrongful assumption, for example those connected with symmetry
//see MatrixException for details
class AssumptionError: public MatrixException{
public:
	AssumptionError(std::string desc): MatrixException(desc) {}
};
