/*̰���㷨����Ƶ�ÿһƥ��Ҫ������ã��������Ӯ�ñ�����ҲҪ���Է���������������ˮ*/
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
			if (a[tianji_min] > b[king_min]) {     //���t����С����k����С������
				sum++;
				tianji_min++;
				king_min++;
			}
			else if (a[tianji_max] > b[king_max]) {  //�������t��������k�����������
				sum++;
				tianji_max--;
				king_max--;
			}
 		                                //�������t����С����k�����������
			else {
				if (a[tianji_min] < b[king_max])  //������t����С����k�����   
					sum--;
				tianji_min++;
				king_max--;
			}
		}
		cout << sum * 200 << endl;
	}
	return 0;
}