#include<iostream>
using namespace std;
int main()
{
	int x;
	int a[10][5] = { { 0 },{ 1 },{ 2,4,8,6 },{ 3,9,7,1 },{ 4,6 },{ 5 },{ 6 },{ 7,9,3,1 },{ 8,4,2,6 },{ 9,1 } };
	int t;
	cin >> t;
	while (t--) {
		int n = 0;
		cin >> x;
		n = x % 10;
		if (n == 0 || n == 1 || n == 5 || n == 6 ) cout << n << endl;
		else if (n == 2 || n == 3 || n == 7||n==8) cout << a[n][(x - 1 )% 4] << endl;
		else if (n == 4 || n == 9) cout << a[n][(x - 1) % 2] << endl;
	}
	return 0;
}
