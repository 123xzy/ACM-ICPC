#include<iostream>
using namespace std;
int si, sj,ei, ej,n,m,flag,t;
char map[8][8];
int dir[4][2] = { {0,1},{1,0}, {-1,0},{0,-1} };
void dfs(int a, int b, int cost_time)
{
	int temp;
	if (a > n || a<1 || b>m || b < 1)return;
	if (cost_time == t&&ei == a&&ej == b)flag = 1;
	
	temp = (t - cost_time) - (abs(ei - a) + abs(ej - b));
	if (temp < 0 || temp & 1)return;
	
	if (flag)return;
	for(int i=0;i<4;i++)
		if (map[a + dir[i][0]][b + dir[i][1]] !='X')
		{
			map[a + dir[i][0]][b + dir[i][1]] = 'X';
			dfs(a + dir[i][0], b + dir[i][1],cost_time+1);
			map[a + dir[i][0]][b + dir[i][1]] = '.';
		}
	return;
}
int main()
{
	while(cin>>n>>m>>t&&n&&m&&t)
	{ 
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
			{
				cin >> map[i][j];
				if (map[i][j] == 'S') { si = i; sj = j; }
				if (map[i][j] == 'D') { ei = i; ej = j; }
			}
		flag = 0;
		map[si][sj] = 'X';
		dfs(si, sj, 0);
		if (flag)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}