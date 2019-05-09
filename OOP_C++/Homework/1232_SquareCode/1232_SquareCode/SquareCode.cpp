#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	string str;
	while (cin>>str) {
		int str_len = str.size();
		double side = sqrt(str_len);
		side = ceil(side);
		for (int i = 0; i < side; i++) {
			for (int j = 0; j < side; j++) {
				if (i + j * side < str_len) {
					cout << str[i + j * side];
				}
			}
			cout << endl;
		}
	}
	return 0;
}