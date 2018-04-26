#include<iostream>
#include<algorithm>
#define MAXN 1005
using namespace std;
bool compare(int a, int b)
{
	return a > b;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n,j;
		int a[MAXN] = { 0 };
		int flag=0;
		cin >> n;
		int head = 0;
		for (int i = 0; i <n; i++) {
			cin >> a[i];
		}
		int count = n;
		sort(a, a + n,compare);
		while (count--) {
			for (j = head+1 ; j <= head + a[head]; j++) {
				a[j]--;
				if (a[j] < 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 1)break;
			sort(a , a + n , compare);
			head++;
		}
		if (flag == 0)
			cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}