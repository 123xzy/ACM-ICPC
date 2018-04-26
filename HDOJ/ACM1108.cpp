#include<iostream>

using namespace std;

int main()
{
	int a, b, c, x;
	while (cin >> a >> b) {
		x = a*b;
		c = a%b;
		while (c != 0) {
			a = b; b = c;
			c = a%b;
		}
		cout << x/b << endl;
	}
	return 0;
}
