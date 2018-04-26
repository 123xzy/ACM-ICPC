#include<iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b&&a != 0 && b != 0) {
		int sum = 1;
		for (int i = 0; i<b; i++) {
			sum = (sum*a) % 1000;
		}
		cout << sum << endl;
	}
	return 0;
}
