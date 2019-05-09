//#include"complex.h"
//int main()
//{
//	// test constructors
//	Complex x, y(6), z(0, 2.1);
//	cout << "x =  " << x << "y = " << y << "z = " << z << endl << endl;
//
//	x = Complex(3, -4);
//
//	cout << "testing members and support functions as well as"
//		<< " output operator:\n"
//		<< "complex number x = " << x << endl
//		<< "real part: " << x.real() << endl
//		<< "real part from friend real(x): " << real(x) << endl
//		<< "imaginary part: " << x.imag() << endl
//		<< "imaginary part from friend imag(x) : " << imag(x) << endl
//		<< "norm: " << norm(x) << endl << endl;
//
//	cout << "test complex arithmetic and output routines: \n\n";
//	y = Complex(8, -6);
//	cout << "x =  " << x << "y = " << y << "z = " << z << endl << endl;
//
//	z = x + y;
//	cout << "z = x + y = " << z << endl;
//
//	z = x * y;
//	cout << "z = x * y = " << z << endl;
//
//	z = x - y;
//	cout << "z = x - y = " << z << endl;
//
//	z = x / y;
//	cout << "z = x / y = " << z << endl << endl;
//
//	//test of automatic conversion double -> complex by the constructor. 
//
//	double d(-4);
//	cout << "d: " << d << "   x: " << x << endl;
//	cout << "x+d: ";
//	z = x + d;
//	cout << z << endl;
//	z = x - d;
//	cout << "x-d: ";
//	cout << z << endl;
//	z = x * d;
//	cout << "x*d: ";
//	cout << z << endl;
//	z = x / d;
//	cout << "x/d: ";
//	cout << z << endl;
//	z = d + x;
//	cout << "d+x: ";
//	cout << z << endl;
//	z = d - x;
//	cout << "d-x: ";
//	cout << z << endl;
//	z = d * x;
//	cout << "d*x: ";;
//	cout << z << endl;
//	z = d / x;
//	cout << "d/x: ";;
//	cout << z << endl;
//
//	//test whether double/complex and complex/complex give same result:
//	Complex test(2, 3);
//	cout << "test/x: ";
//	cout << test / x << endl;
//
//	cout << "\nGetting data from standard input: \n";
//	cin >> x >> y;
//	cout << "data read is: x = " << x << " y = " << y << endl << endl;
//	return 0;
//}
