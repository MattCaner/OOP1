#include "CleverMatrix.h"
		
CleverMatrix::CleverMatrix(int* values, int size, string type) try: CleverMatrix(size) {
	for(int i = 0; i<m_size*m_size; i++){
		m_data[i] = values[i];
	}
	bool symetry = true;
	for(int i = 0; i<m_size; i++){
		for(int j = 0; j<m_size; j++)	if(operator()(i,j)!=operator()(j,i)) symetry = false;
	}
	if(type=="nonsymmetric" && symetry == true) throw AssumptionError("Matrix is symmetric");

	if(type=="symmetric" && symetry == false ) throw AssumptionError("Matrix is not symmetric");

} catch(...){
	std::cout << "Problem in the constructor!" << std::endl;
}

CleverMatrix::CleverMatrix(const CleverMatrix& cm): CleverMatrix(cm.m_size){
	for(int i = 0; i<m_size*m_size; i++){
		m_data[i] = cm.m_data[i];
	}
}

CleverMatrix::CleverMatrix(int size): m_size(size){
	m_data = new int[m_size*m_size];
	for(int i = 0; i<m_size*m_size; i++) m_data[i] = 0;
}

int& CleverMatrix::operator()(int row, int col){
	if(row>=m_size||col>=m_size) throw IllegalOperation("Indices (" + std::to_string(row) + ", " + std::to_string(col) + ") are out of bonds");
	else{
		return m_data[mapIdx(row,col)];
	}
}

CleverMatrix CleverMatrix::operator*(const CleverMatrix& c)const{
	if( m_size != c.m_size ){
		throw IllegalOperation("Sizes are different " + std::to_string(m_size) + ", " + std::to_string(c.m_size));		
	}  
	CleverMatrix tmp(m_size);
	for (int i = 0; i < m_size; ++i){
		for (int j = 0; j < m_size; ++j){
			for (int k = 0; k < m_size; ++k){
				tmp(i,j) += m_data[ mapIdx(i,k) ]*c.m_data[ mapIdx(k,j) ];
			}
		}
	}

	return tmp;
}

int CleverMatrix::mapIdx(int row, int col)const{
	return row*m_size+col;
}

void CleverMatrix::print() const{

	for (int i = 0; i < m_size; ++i){
		for (int j = 0; j < m_size; ++j){
			std::cout << m_data[ mapIdx(i,j) ] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
