//Union-Find�㷨��չ��Ҫһ�������¼ÿ�����Ľڵ����,��Ȩunion
//�������߼����󣬲�������������0���õ�1����Ȼ�ǲ��Ե�
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define MAXN 10000005
int id[MAXN];
int sz[MAXN];           //��¼�ڵ����
int find(int x)
{
	int t = x;
	while (t!= id[t])
		t=id[t];
	int p;
	while (x!=t) {    //·��ѹ��
		p= id[x];
		id[x] = t;
		x = p;
	}
	return t;
}
void merge(int x, int y)
{
	int fx, fy;
	fx = find(x);
	fy = find(y);
	if (fx == fy)return ;
	if (sz[fx] > sz[fy]) {sz[fx] += sz[fy]; id[fy] = fx;}
	else { sz[fy] += sz[fx]; id[fx] = fy; }
}
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < MAXN; i++)//��ʼ��
		{
			id[i] = i;
			sz[i] = 1;                   
		}
		int x, y,maxn=0;
		while (n--) {
			scanf("%d%d", &x, &y);
			maxn = max(maxn, max(x, y));
			merge(x,y);
		}
		sort(sz, sz + maxn+1, cmp);
		cout << sz[0] << endl;
	}
}