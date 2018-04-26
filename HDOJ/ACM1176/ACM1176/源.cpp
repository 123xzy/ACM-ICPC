#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define MAXN 140000
int a[MAXN][11];
int main()
{
	int n, position, time;
	while (cin>>n&&n) {
		int max_time = 0;
		memset(a, 0, sizeof(a));
		for (int i = 0; i < n; i++) {
			scanf_s("%d%d", &position, &time);
			a[time][position]++;
			max_time = max(max_time, time);
		}
		for (int i = max_time - 1; i >= 0; i--)
		{
			for (int j = 0; j <= 10; j++)
			{
				if(j==0)
				{
					a[i][j] += max(a[i + 1][j], a[i + 1][j +1]);
					continue;
				}
				if(j==10)
				{
					a[i][j] += max(a[i + 1][j], a[i + 1][j - 1]);
					continue;
				}
				a[i][j] += max(max(a[i + 1][j ], a[i + 1][j+1]), a[i + 1][j - 1]);
			}
		}
		cout << a[0][5] << endl;
	}
	return 0;
}