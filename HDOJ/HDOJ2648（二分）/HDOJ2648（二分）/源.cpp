#include<iostream>
#include<algorithm>
using namespace std;
#define MAXN 10005
struct shop
{
	char name[35];
	int price;
}shops[MAXN];
bool cmp(shop a, shop b) {return a.price > b.price;}
int main()
{
	int n; 
	while (cin >> n)
	{
		int i;
		for (i = 0; i < n; i++)
			cin >> shops[i].name;
		int m; cin >> m; int j;
		for (j = 0; j < m; j++)
		{
			int flag;
			for (i = 0; i < n; i++)
			{
				cin >> shops[i].price >> shops[i].name;
				if (!strcmp("memory", shops[i].name))
					flag = shops[i].price;
			}
			sort(shops, shops + n, cmp);
			int num = 1;
			for (i = 0; i < n; i++)
				if (shops[i].price > flag)num++;
			cout << num << endl;
		}
	}
}