int main(void) {
	Point A, B, C;

	A.set(5, -20);
	cout << A.retrieveVertical() << " " << A.retrieveHorizontal() << endl;

	B.set(3, -2);
	cout << B.retrieveVertical() << " " << B.retrieveHorizontal() << endl;

	B.move(1, 2);
	cout << B.retrieveVertical() << " " << B.retrieveHorizontal() << endl;

	C.set(5, 25);
	cout << C.retrieveVertical() << " " << C.retrieveHorizontal() << endl;
	C.move(3, -15);
	cout << C.retrieveVertical() << " " << C.retrieveHorizontal() << endl;

	for (int i = 0; i < 4; i++) {
		C.rotate();
		cout << C.retrieveVertical() << " " << C.retrieveHorizontal() << endl;
	}

	return 0;
}