#include "complex.h"

int main()
{
	//test constructors
	Complex x, y(3), z(-3.2, 2.1);
	cout << "x =  " << x << "y = " << y << "z = " << z << endl << endl;

	x = Complex(3, -4);

	cout << "testing members and support functions as well as"
		<< " output operator:\n"
		<< "complex number x = " << x << endl
		<< "real part: " << x.real() << endl
		<< "real part from friend real(x): " << real(x) << endl
		<< "imaginary part: " << x.imag() << endl
		<< "imaginary part from friend imag(x) : " << imag(x) << endl
		<< "norm: " << norm(x) << endl << endl;

	cout << "test operator ==:" << endl << endl;
	if (x == y)
		cout << "x = y" << endl << endl;
	else
		cout << "x!=y" << endl << endl;

	cout << "test complex arithmetic and output routines: \n\n";
	y = Complex(1, -1);
	cout << "x =  " << x << "y = " << y << "z = " << z << endl << endl;

	z = x + y;
	cout << "z = x + y = " << z << endl;

	z = x * y;
	cout << "z = x * y = " << z << endl;

	z = x - y;
	cout << "z = x - y = " << z << endl;

	z = x / y;
	cout << "z = x / y = " << z << endl << endl;

	//test of automatic conversion double -> complex by the constructor. 

	double d(2.0);
	cout << "d: " << d << "   x: " << x << endl;
	cout << "x+d: ";
	z = x + d;
	cout << z << endl;
	z = x - d;
	cout << "x-d: ";
	cout << z << endl;
	z = x * d;
	cout << "x*d: ";
	cout << z << endl;
	z = x / d;
	cout << "x/d: ";
	cout << z << endl;
	z = d + x;
	cout << "d+x: ";
	cout << z << endl;
	z = d - x;
	cout << "d-x: ";
	cout << z << endl;
	z = d * x;
	cout << "d*x: ";;
	cout << z << endl;
	z = d / x;
	cout << "d/x: ";;
	cout << z << endl;

	//test whether double/complex and complex/complex give same result:
	Complex two(2, 0);
	cout << "two/x: ";
	cout << two / x << endl;

	cout << "\nGetting data from standard input: \n";
	cin >> x >> y;
	cout << "data read is: x = " << x << " y = " << y << endl << endl;
	return 0;
}