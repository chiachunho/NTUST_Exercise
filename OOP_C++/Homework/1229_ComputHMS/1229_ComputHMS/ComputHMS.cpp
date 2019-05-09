#include <iostream>
using namespace std;

int main()
{
	long long int i;
	while (cin >> i)
	{
		long long int hr=0, min=0, sec=0;
		min = i / 60;
		sec = i - (60 * min);
		hr = min / 60;
		min = min - (60 * hr);
		if (hr) cout << hr << " hours " << min << " minutes and " << sec << " seconds\n";
		else if (min) cout << min << " minutes and " << sec << " seconds\n";
		else cout << sec << " seconds\n";
	}
	return 0;
}