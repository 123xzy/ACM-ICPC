#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m;
	cin >> m;
	for (int i = 0; i<m; i++) {
		double sum=0;
		int n;
		cin >> n;
		for (int  j = 1; j <= n; j++) {
			if (j % 2 == 0) sum =sum- 1.0 / j;
			else sum=sum+1.0/j;
		}
		cout  << setprecision(2) << fixed << sum<<endl;
	}
	return 0;
}
