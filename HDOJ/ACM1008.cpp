#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n&&n) {
		int min = 0, floor, x = 0;
		for (int i = 1; i <= n; i++) {
			cin >> floor;
			if (floor>x) min = min + (floor - x) * 6;
			else min = min + (x - floor) * 4;
			min += 5;
			x = floor;
		}
		cout << min << endl;
	}
	return 0;
}
