#include<iostream>
#include<algorithm> //包含sort函数的头文件
using namespace std;
#define MAXN 10005
class warehouse
{
public:
	double j, f;
	double value;
}a[MAXN];
bool compare(warehouse a, warehouse b)
{
	return a.value > b.value;
}
int main()
{
	int N,M;
	while (cin>>M>>N) {
		if (M == -1 && N == -1)break;
		for(int i=0;i<N;i++) {
			cin >> a[i].j >> a[i].f;
			a[i].value = a[i].j / a[i].f;
		}
		sort(a, a + N, compare);
		double sum = 0;
		for (int j = 0; j < N; j++) {
			if (M >= a[j].f) {
				M = M - a[j].f;
				sum = sum + a[j].j;
			}
			else {
				sum = sum + (M / a[j].f)*a[j].j;
				break;
			}
		}
		printf("%.3lf\n", sum);
	}
	return 0;
}