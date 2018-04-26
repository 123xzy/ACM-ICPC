#include<iostream>
#define MAXN 1005
int dp[MAXN][MAXN];
int a[MAXN];
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--) {
		int t;
		cin >> t;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for(int i=1;i<n;i++)
			for (int j = n; j > i; j--) {
				
			}
	}
}