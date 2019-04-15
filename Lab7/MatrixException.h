#pragma once
#include<string>
#include<iostream>

//General class for handling matrix exceptions
class MatrixException{
public:
	MatrixException(std::string desc): _desc(desc) {}		//desc is user-defined description of an error
	std::string what() const {return _desc; }	//error description
private:
	std::string _desc;
};
