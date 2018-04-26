/*贪心算法：田计的每一匹马都要最大化利用，如果不能赢得比赛，也要将对方最厉害的马拉下水*/
#include<iostream>
#include<algorithm>
#define MAXN 1005
int a[MAXN],b[MAXN];
using namespace std;
bool compare(int a, int b)
{
	return a > b;
}
int main()
{
	int n;
	while (cin >> n&&n) {
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int j = 0; j < n; j++)
			cin >> b[j];
		sort(a, a + n);
		sort(b, b + n);
		int sum = 0;
		int tianji_max = n - 1, tianji_min = 0;
		int king_max = n - 1, king_min = 0;
		while (tianji_min <=tianji_max) {          //
			if (a[tianji_min] > b[king_min]) {     //如果t的最小大于k的最小则拿下
				sum++;
				tianji_min++;
				king_min++;
			}
			else if (a[tianji_max] > b[king_max]) {  //否则如果t的最大大于k的最大，则拿下
				sum++;
				tianji_max--;
				king_max--;
			}
 		                                //否则如果t的最小大于k的最大，则拿下
			else {
				if (a[tianji_min] < b[king_max])  //否则拿t的最小拿下k的最大   
					sum--;
				tianji_min++;
				king_max--;
			}
		}
		cout << sum * 200 << endl;
	}
	return 0;
}