#include<iostream>
#include<algorithm>
char a[1005], b[1005];
int dp[1005][1005];
using namespace std;
int main()
{
	while (cin >> a >> b)
	{
		int n, m;
		int maxnum = 0;
		memset(dp, 0, sizeof(dp));
		n = strlen(a); 
		m = strlen(b);
		for(int i=1;i<=n;i++)
			for (int j = 1; j <= m; j++) 
			{
				if (a[i-1] == b[j-1])dp[i][j] = dp[i - 1][j - 1] + 1;
				else { dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); }
				if (maxnum < dp[i][j])maxnum = dp[i][j];
			}
		cout << maxnum<< endl;
	}
}