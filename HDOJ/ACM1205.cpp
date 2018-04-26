#include<iostream>
#define MAXN 1000005
using namespace std;
int a[MAXN];
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		__int64 sum = 0;
		int max = 0;
		for (int i = 0; i<n; i++) {
			cin >> a[i];
			if (a[i]>max)max = a[i];
			sum = sum + a[i];
		}
		if (max <=( sum - max + 1))cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
