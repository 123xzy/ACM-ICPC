#include<iostream>
using namespace std;
#define MAXN 1005
int main()
{
	int n;
	while (cin >> n&&n)
	{
		int temp_max[MAXN];
		long long int a[MAXN];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++) 
			temp_max[i] = a[i];
		for (int i = 1; i <= n; i++)
		{
			for (int j = i-1; j >=1; j--)
				if (a[j] < a[i]&& temp_max[i] <temp_max[j] + a[i])temp_max[i]=temp_max[j]+a[i] ;
		}
		int max = 0;
		for (int i = 0; i <= n; i++) {
			if (temp_max[i] > max)max = temp_max[i];
		}
		cout << max << endl;
	}
	return 0;
}












































































