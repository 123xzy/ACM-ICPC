#include<iostream>
using namespace std;
#define MAXN 105
char map[MAXN][MAXN];
int m,n;
int dir[8][2] = { { 0,-1 },{ 0,1 },{ 1,0 },{ -1,0 },{-1,-1},{-1,1},{1,-1},{1,1} };//·½Ïò
void dfs(int si, int sj)
{
	if (si<0 || si>m || sj<0 || sj>n)return;
	for (int i = 0; i < 8; i++)
	{
		if (map[si + dir[i][0]][sj + dir[i][1]] == '@')
		{
			map[si + dir[i][0]][sj + dir[i][1]] ='*';
			dfs(si + dir[i][0], sj + dir[i][1]);
		}
	}
	return ;
}

int main()
{
	while (cin >> m >> n&&n&&m)
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> map[i][j];
		int num = 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (map[i][j] == '@') { dfs(i, j); num++; }
		cout << num << endl;
	}
}