#pragma once
#include<iostream>
#include<string>
#include "AssumptionError.h"
#include "IllegalOperation.h"
#include "MatrixException.h"

using std::string;

class CleverMatrix{
public:
	CleverMatrix(int* values, int size,string type = "any");	//Constructor. Type defines if matrix is symmetrical
	CleverMatrix(const CleverMatrix& cm);					//Copy constructor
	~CleverMatrix() { delete [] m_data; }						//Deletes and cleanses memory
	CleverMatrix(int size);										//Creates and empty matrix filled with zeros
	CleverMatrix operator*(const CleverMatrix& c)const;			//Multiplication operator
	int& operator()(int row, int col);							//Access operator
	int mapIdx(int row, int col) const;							//Tranlates matrix indices
	void print() const;											//Printing function

private:
	int m_size;
	int* m_data;

};
