/*
三个条件：
1.不能成环
2.不能成树林
3.入度小于等于1
特判：
空树也是树
*/
#include<iostream>
#include<stdio.h>
using namespace std;
#define MAXN 10005
int disjoint[MAXN];   //并查集
int indegree[MAXN];   //记录出度
int show[MAXN];        //标记出现的点
int find(int x)       //找根节点
{
	int t = x;
	while(disjoint[t] != t)
		t = disjoint[t];
	return t;
}
int merge(int x, int y)  //合并查集(如果在一个集合形成环，则返回0)
{
	int fx = find(x);
	int fy = find(y);
	if (fx == fy) return 0;
	else while(disjoint[fy]!= fx)
		disjoint[fy] = fx;
	return fx;//如果没有成环，则合并，否则返回0	                                         
}
int main()
{
	int x, y,count=1;
	while (cin >> x >> y&&x>=0&&y>=0)
	{
		for (int i = 1; i <= MAXN; i++)      //初始化并查集和入度
		{
			indegree[i] = 0;
			disjoint[i] = i;
			show[i] = 0;
		}
		if (x == 0 && y == 0)                 //特判空树
		{
			printf("Case %d is a tree.\n", count++);
			continue;
		}
		
		show[x]++; show[y]++;
		indegree[y]++;    
		merge(x, y);                         //要注意x，y顺序，因为该树是有方向的
		int flag1 = 0, flag2 = 0,flag3=0;    //分别表示是否成环，是否成树林，是否入度小于等于1
		int a, b;
		while (cin >> a >> b&&a&&b)
		{
			if (merge(a, b) == 0)flag1 = 1;//成环
			show[a]++; show[b]++;
			indegree[b]++;
		}

		int root=0;
		if(flag1==1)printf("Case %d is not a tree.\n", count++);
		else
		{
			for (int j = 1; j < MAXN; j++)
			{
				if (show[j] && disjoint[j] == j)  //计算有几个根节点
				{
					root++;
					if (root > 1) {
						flag2 = 1;
						break;
					}
				}
				if (indegree[j] > 1)flag3 = 1;
			}
			if(flag2||flag3)printf("Case %d is not a tree.\n", count++);
			else printf("Case %d is a tree.\n", count++);
		}
	}
	return 0;
}