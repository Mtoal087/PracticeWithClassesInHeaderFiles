#ifndef COMPLEX_H
#define COMPLEX_H

// get() - gets user data

// set() - sets the specified value in an object

// display() - displays the complex number project

//sum() - sums two complex numbers & returns complex number

class Complex{
	public:

		void set(float real, float imaginary);

		void display();

		Complex sum(Complex C2);

	private:
		float m_real;

		float m_imaginary;

};

#endif
