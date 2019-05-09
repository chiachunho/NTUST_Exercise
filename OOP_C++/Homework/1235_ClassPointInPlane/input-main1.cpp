int main(void) {
	Point point;

	point.set(0, 5);
	cout << point.retrieveVertical() << " " << point.retrieveHorizontal() << endl;

	point.move(1, 2);
	cout << point.retrieveVertical() << " " << point.retrieveHorizontal() << endl;
	for (int i = 0; i < 4; i++) {
		point.rotate();
		cout << point.retrieveVertical() << " " << point.retrieveHorizontal() << endl;
	}

	return 0;
}