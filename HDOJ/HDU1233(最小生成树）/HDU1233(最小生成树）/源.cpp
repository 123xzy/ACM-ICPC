#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
#define M 10005 
struct node {       //����ߵĽṹ�壬�����ߵ���ʼ���У��������У�·�ľ���
	int start;
	int end;
	int dis;
}edge[10005];
int disjoint[M];    
int find(int x)
{
	int temp=x;
	while(disjoint[temp]!= temp)    //һֱ�ҵ����ڵ�
		temp =disjoint[temp];   
	return temp;
}
int merge(int a, int b)
{
	int fa, fb;
	fa = find(a);
	fb = find(b);
	if (fa != fb)
	{
		disjoint[fa] = fb; return 1;
	}
	else return 0;
}
bool cmp(node n,node m)      //�������
{
	return n.dis < m.dis;
}
int main()
{
	int n,i,j;
	while (scanf("%d",&n)&&n)
	{
		int count = n*(n - 1) / 2;
		for (i = 1; i <= count; i++)
			disjoint[i] = i;   //��ʼ�����鼯
		for (i = 1; i <= count; i++)
			scanf("%d%d%d", &edge[i].start, &edge[i].end, &edge[i].dis);
		sort(edge+1, edge + count+1, cmp);           //���߳�����С��������
		int sum = 0,num=0;
		for (j = 1; j <=count&&num<n; j++)
		{
			if (merge(edge[j].start,edge[j].end))
			{
				sum += edge[j].dis; 
				num++;
			}
		}
		cout << sum << endl;
	}
}