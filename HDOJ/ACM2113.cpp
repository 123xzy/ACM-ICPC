#include<iostream>

using namespace std;

int main()
{
	int c,flag=0;
	while (cin >> c) {
		int n, sum = 0;
		while (c != 0) {
			n = c % 10;
			if (n % 2 == 0)sum = sum + n;
			c /= 10;
		}
		if (flag!=0) cout << endl;
		flag++;
		cout << sum << endl;
	}
	return 0;
}

