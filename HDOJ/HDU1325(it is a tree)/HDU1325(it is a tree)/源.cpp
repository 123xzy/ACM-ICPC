/*
����������
1.���ܳɻ�
2.���ܳ�����
3.���С�ڵ���1
���У�
����Ҳ����
*/
#include<iostream>
#include<stdio.h>
using namespace std;
#define MAXN 10005
int disjoint[MAXN];   //���鼯
int indegree[MAXN];   //��¼����
int show[MAXN];        //��ǳ��ֵĵ�
int find(int x)       //�Ҹ��ڵ�
{
	int t = x;
	while(disjoint[t] != t)
		t = disjoint[t];
	return t;
}
int merge(int x, int y)  //�ϲ��鼯(�����һ�������γɻ����򷵻�0)
{
	int fx = find(x);
	int fy = find(y);
	if (fx == fy) return 0;
	else while(disjoint[fy]!= fx)
		disjoint[fy] = fx;
	return fx;//���û�гɻ�����ϲ������򷵻�0	                                         
}
int main()
{
	int x, y,count=1;
	while (cin >> x >> y&&x>=0&&y>=0)
	{
		for (int i = 1; i <= MAXN; i++)      //��ʼ�����鼯�����
		{
			indegree[i] = 0;
			disjoint[i] = i;
			show[i] = 0;
		}
		if (x == 0 && y == 0)                 //���п���
		{
			printf("Case %d is a tree.\n", count++);
			continue;
		}
		
		show[x]++; show[y]++;
		indegree[y]++;    
		merge(x, y);                         //Ҫע��x��y˳����Ϊ�������з����
		int flag1 = 0, flag2 = 0,flag3=0;    //�ֱ��ʾ�Ƿ�ɻ����Ƿ�����֣��Ƿ����С�ڵ���1
		int a, b;
		while (cin >> a >> b&&a&&b)
		{
			if (merge(a, b) == 0)flag1 = 1;//�ɻ�
			show[a]++; show[b]++;
			indegree[b]++;
		}

		int root=0;
		if(flag1==1)printf("Case %d is not a tree.\n", count++);
		else
		{
			for (int j = 1; j < MAXN; j++)
			{
				if (show[j] && disjoint[j] == j)  //�����м������ڵ�
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