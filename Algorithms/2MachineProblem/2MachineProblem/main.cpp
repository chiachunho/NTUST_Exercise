#include <iostream>
#include <algorithm>
#define max(num1, num2) (num1 > num2 ? num1 : num2)

using namespace std;

typedef struct time {
	int s, g; // for Sultan and GolapiBaba
}Time;

bool cmp(Time &a, Time &b) {
	return a.s + b.g + max(b.s, a.g) < a.g + b.s + max(b.g, a.s);
}
bool cmp1(Time &a, Time &b)
{
	return a.s < b.s;
}
bool cmp2(Time &a, Time &b)
{
	return a.g > b.g;
}

int main() {
	int T, idx, stime, gtime;
	Time t[21];

	while (cin >> T) 
	{
		for (idx = 0; idx < T; idx++) cin >> t[idx].s;
		for (idx = 0; idx < T; idx++) cin >> t[idx].g;

		Time t1[21];
		Time t2[21];

		int p1 = 0;
		int p2 = 0;

		for (idx = 0; idx < T; idx++)
		{
			if (t[idx].g > t[idx].s)
			{
				t1[p1] = t[idx];
				p1++;
			}
			else
			{
				t2[p2] = t[idx];
				p2++;
			}
		}

		sort(t1, t1 + p1, cmp1);
		sort(t2, t2 + p2, cmp2);

		stime = t[0].s;
		gtime = t[0].s + t[0].g;
		for (idx = 1; idx < T; idx++) {
			stime += t[idx].s;
			gtime = stime >= gtime ? stime + t[idx].g : gtime + t[idx].g;
		}
		cout << gtime << endl;
	}
	return 0;
}