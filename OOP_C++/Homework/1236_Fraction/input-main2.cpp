//input-main2.cpp
int main()
{
	Fraction f1, f2, f3, f4;
	f1.setNumerator(500);
	f1.setDenominator(2);
	cout << f1.getDouble() << endl;
	f1.outputReducedFraction();
	cout << endl;

	f2.setNumerator(1);
	f2.setDenominator(80);
	cout << f2.getDouble() << endl;
	f2.outputReducedFraction();
	cout << endl;

	f3.setNumerator(450);
	f3.setDenominator(1);
	cout << f3.getDouble() << endl;
	f3.outputReducedFraction();
	cout << endl;

	f4.setNumerator(3);
	f4.setDenominator(50);
	cout << f4.getDouble() << endl;
	f4.outputReducedFraction();
	cout << endl;
	return 0;
}