#pragma once
#include<string>
#include<iostream>
#include"MatrixException.h"

//Class for handling illegal operations such as wrongful access
//see MatrixException for details
class IllegalOperation: public MatrixException{
public:
	IllegalOperation(std::string desc): MatrixException(desc) {}
};
