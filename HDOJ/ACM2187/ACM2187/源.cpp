#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
struct dami
{
	int price;
	int weight;
};
bool compare(dami x, dami y)
{
	return x.price< y.price;
}
int main()
{
	dami a[1005];
	int c;
	cin >> c;
	while (c--)
	{
		int  m;
		double sum = 0.00, allprice;
		cin >> allprice >> m;
		for (int i = 0; i < m; i++) {
			cin >> a[i].price >> a[i].weight;
		}
		sort(a, a + m, compare);
		for (int j = 0; j < m; j++) {
			if (a[j].price*a[j].weight > allprice) {
				sum = sum + allprice / a[j].price;
				break;
			}
			else {
				sum = sum + a[j].weight;
				allprice = allprice - a[j].price*a[j].weight;
			}
		}
		cout << fixed << setprecision(2) << sum << endl;
	}
	return 0;
}