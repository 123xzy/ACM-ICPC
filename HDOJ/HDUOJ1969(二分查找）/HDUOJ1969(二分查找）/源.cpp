#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
#define MAXN 10005
#define Pi 3.14159265358979323846
int radi[MAXN];
bool cmp(int a, int b) { return a > b; }
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, f; cin >> n >> f;
		for (int i = 0; i < n; i++)
			cin >> radi[i];
		sort(radi, radi + n, cmp);
		double max = radi[0]*radi[0]*Pi;
		double min = 0.0;
		double mid = (max + min) / 2.0;
		while ((max-min) > 1e-7)
		{
			int sum = 0;
			for (int j = 0; j < n; j++)
			{
				double a = radi[j]*radi[j]*Pi/mid;//当前蛋糕可以被分成a份
				sum += (int)a;
			}
			if (sum >= (f + 1)) { min = mid; mid = (max + min) / 2; }
			else { max = mid; mid = (max + min) / 2; }
		}
		printf("%.4lf\n", mid);
	}
}