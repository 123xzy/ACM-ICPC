/*һ���򵥵ĵ���Ӧ�ã�����Ϊ�����ظ�̫�࣬Ҫ���𰸱��棬��ֹ��ʱ*/
#include<iostream>
using namespace std;
int main()
{
	int N;
	int a[41] = { 0,1,1 };
	for (int i = 2; i <= 40; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	cin >> N;
	while (N--) {
		int m;
		cin >> m;
		cout << a[m]<<endl;
	}	
	return 0;
}