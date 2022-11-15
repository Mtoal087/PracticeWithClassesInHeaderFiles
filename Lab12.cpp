#include "Complex.h"
#include <iostream>
using namespace std;

int main(){
	Complex C1, C2;

	cout << "Enter the real part of the first complex number: ";
	float real1;
	cin >> real1;

	cout << "Enter the imaginary part of the first complex number: ";
	float imaginary1;
	cin >> imaginary1;

	C1.set(real1, imaginary1);

	cout << "The first complex number is: ";
	C1.display();

	cout << "Enter the real part of the second complex number: ";
	float real2;
	cin >> real2;

	cout << "Enter the imaginary part of the second complex number: ";
	float imaginary2;
	cin >> imaginary2;

	C2.set(real2, imaginary2);

	cout << "The second complex number is: ";
	C2.display();

	Complex C3 = C1.sum(C2);

	cout << "After adding the two complex numbers, the result is ";
	C3.display();

	return 0;
}
