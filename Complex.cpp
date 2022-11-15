#include "Complex.h"
#include <iostream>
using namespace std;


void Complex::set(float real, float imaginary){

	m_real = real;
	m_imaginary = imaginary;
}

void Complex::display(){
	cout << "(" << m_real << " , " << m_imaginary << "i)" << endl;
}

Complex Complex::sum(Complex C2){
	Complex temp;
	float real_result = m_real + C2.m_real;
	float imaginary_result = m_imaginary + C2.m_imaginary;
	temp.set(real_result, imaginary_result);
	return temp;
}


