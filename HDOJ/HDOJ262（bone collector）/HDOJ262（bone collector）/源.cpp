#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define MAXN 10005
unsigned long long int Dp[MAXN];
int val[MAXN];
int vol[MAXN];
int main()
{
	int n; cin >> n;
	while (n--)
	{
		memset(Dp, 0, MAXN);
		int num,allvol,i,j;
		unsigned long long maxn = 0;
		cin >> num >>allvol;
		for (i = 1; i <=num; i++)
			cin >> val[i];
		for (i = 1; i <= num; i++)
			cin >> vol[i];
		for(i=1;i<=num;i++)
			for (j =allvol; j>=vol[i]; j--)
			{
				Dp[j] = max(Dp[j], Dp[j - vol[i]] + val[i]);
				if (Dp[j] > maxn)maxn = Dp[j];
			}
		cout << maxn << endl;
	}
}