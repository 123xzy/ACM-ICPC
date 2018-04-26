#include<iostream>
#define MAXN 405
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int room[MAXN] = { 0 };
		int n,a,b,t;
		int max = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			a = (a - 1) / 2;   //???
			b = (b - 1) / 2;  //???
			if (a > b) {
				t = a; a=b; b = t;
			}
			for (int j = a; j <= b; j++) {
				room[j]++;
			}
		}
		for (int i = 0; i < MAXN; i++) {
			if (room[i] > max)max = room[i];
		}
		cout <<  max*10<< endl;
	}
	return 0;
}