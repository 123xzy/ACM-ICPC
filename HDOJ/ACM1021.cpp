#include<iostream>
#define MAXN 1000005
using namespace std;
int a[MAXN];
int main()
{
	int n;
	a[0] = 7, a[1] = 11;
	while(cin>>n){
		for (int i = 2; i <= n; i++) {
			a[i] = a[i - 1] + a[i - 2];
		}
		if (a[n] % 3 == 0)cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}
