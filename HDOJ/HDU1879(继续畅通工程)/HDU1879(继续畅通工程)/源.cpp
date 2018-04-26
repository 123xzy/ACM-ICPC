#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define MAXN 10005
int id[MAXN];
int sz[MAXN];
struct date
{
	int v1;
	int v2;
	int val;
	int flag;
}dat[MAXN];
int find(int x)
{
	while (x != id[x])
		x = id[x];
	return x;
}
void merge(int x, int y)
{
	int fx = find(x);
	int fy = find(y);
	if (sz[fx] > sz[fy]) {
		id[fy] = fx; sz[fx] += sz[fy];
	}
	else { id[fx] = fy; sz[fy] += sz[fx]; }
}
bool cmp(date a, date b)
{
	return a.val < b.val;
}
int main()
{
	int n;
	while (scanf("%d",&n)&&n!=0)
	{
		int allval = 0;
		for (int i = 0; i < MAXN; i++)
		{
			id[i] = i; sz[i] = 1;
		}
		int m = n*(n - 1) / 2;
		for(int i=0;i<m;i++)
		{
			scanf("%d%d%d%d", &dat[i].v1 , &dat[i].v2 , &dat[i].val ,&dat[i].flag);
			if (dat[i].flag) { merge(dat[i].v1, dat[i].v2); dat[i].val=0; }
		}
		sort(dat,dat+m,cmp);
		for (int i = 0; i < m; i++)
		{
			int find1 = find(dat[i].v1);
			int find2 = find(dat[i].v2);
			if(find1!=find2) { 
				merge(dat[i].v1, dat[i].v2);
				allval += dat[i].val;
			}
		}
		cout << allval << endl;
	}
}