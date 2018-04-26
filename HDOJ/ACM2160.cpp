#include<iostream>

using namespace std;

int main()
{
	int t, i, n;
	int a[25] = { 1,1 };
	cin >> t;
	for (i = 2; i <= 20; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	while (t--) {
		cin >> n;
		cout << a[n]<<endl;
	}
	return 0;
}
