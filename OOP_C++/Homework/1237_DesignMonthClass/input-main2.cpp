//input-main2.cpp
int main(void)
{
	Month month1, month2(2), month3(13), month4('M', 'a', 'r'), month5('A', 'P', 'R'), month6, month7, month8;
	month6.inputInt();
	month7.inputStr();

	cout << "Month1 = ";
	month1.outputInt();
	cout << ' ';
	month1.outputStr();
	cout << endl;

	cout << "Month2 = ";
	month2.outputInt();
	cout << ' ';
	month2.outputStr();
	cout << endl;

	cout << "Month3 = ";
	month3.outputInt();
	cout << ' ';
	month3.outputStr();
	cout << endl;

	cout << "Month4 = ";
	month4.outputInt();
	cout << ' ';
	month4.outputStr();
	cout << endl;

	cout << "Month5 = ";
	month5.outputInt();
	cout << ' ';
	month5.outputStr();
	cout << endl;

	cout << "Month6 = ";
	month6.outputInt();
	cout << ' ';
	month6.outputStr();
	cout << endl;

	cout << "Month7 = ";
	month7.outputInt();
	cout << ' ';
	month7.outputStr();
	cout << endl;

	cout << "Month8 = ";
	month8.outputInt();
	cout << ' ';
	month8.outputStr();
	cout << endl;

	for (int times = 0; times < 12; times++)
	{
		month8 = month8.nextMonth();
		cout << "Month8 = ";
		month8.outputInt();
		cout << ' ';
		month8.outputStr();
		cout << endl;
	}
	return 0;
}