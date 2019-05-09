#include "Polynomial.h"
//input-main2.cpp
int main()
{
	Polynomial empty;
	double one[] = { 1 };
	Polynomial One(one, 1);
	double quad[] = { 3, 2, 1 };
	double cubic[] = { 1, 2, 0, 3 };
	Polynomial q(quad, 3); // q is 3 + 2*x + x*x
	Polynomial c(cubic, 4);// c is 1 + 2*x + 0*x*x + 3*x*x*x
	Polynomial p = q;  // test copy constructor
	Polynomial r;
	r = q;             //test operator=

	

	cout << "value of q(2) is " << evaluate(q, 2) << endl;
	cout << "value of p(2) is " << evaluate(p, 2) << endl;
	cout << "value of r(2) is " << evaluate(r, 2) << endl;
	cout << "value of c(2) is " << evaluate(c, 2) << endl;

	r = q + empty;
	cout << "value of (q + empty)(2) is " << evaluate(r, 2) << endl;

	r = c - empty;
	cout << "value of (c - empty)(2) is " << evaluate(r, 2) << endl;

	r = q * empty;
	cout << "size of q * empty is " << r.mySize() << endl;
	cout << "Polynomial r (= q * empty) " << endl;
	for (int i = 0; i < r.mySize(); i++)
		cout << "term with degree " << i << " has coefficient " << r[i] << endl;

	q = q + q;
	cout << "Polynomial q + q" << endl;
	for (int i = 0; i < q.mySize(); i++)
		cout << "term with degree " << i << " has coefficient " << q[i] << endl;

	c = c - c;
	cout << "Polynomial c - c" << endl;
	for (int i = 0; i < c.mySize(); i++)
		cout << "term with degree " << i << " has coefficient " << c[i] << endl;

	empty = empty * empty;
	cout << "Polynomial empty * empty" << endl;
	for (int i = 0; i < empty.mySize(); i++)
		cout << "term with degree " << i << " has coefficient " << empty[i] << endl;

	q = q * q;
	cout << "Polynomial q * q" << endl;
	for (int i = 0; i < q.mySize(); i++)
		cout << "term with degree " << i << " has coefficient " << q[i] << endl;

	cout << "value of (q * c)(2) is " << evaluate(r, 2) << endl;
	return 0;
}