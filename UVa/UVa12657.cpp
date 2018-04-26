#include<stdio.h>
#include<iostream>
using namespace std;
#define MAXN 100005

int Left[MAXN];//left[i]��ʾi��ߵĺ��ӱ��
int Right[MAXN];

void link(int l, int r)//����l,r����
{
	Right[l] = r;
	Left[r] = l;
}

int main()
{
	long long int n; //��ʾ��n������
	int Case = 1;//��¼case
	int m; //ָ��Ĵ���
	while (cin >> n >> m)
	{
		for (int i = 1; i <= n; i++)//�������ұ�ų�ʼ��
		{
			Left[i] = i - 1;
			Right[i] = (i + 1) % (n + 1);
		}
		Right[0] = 1; Left[0] = n;

		int ch, x, y;
		int flag = 0;//ģʽ4��־

		while (m--)
		{
			cin >> ch;//�ƶ�ģʽ
			if (4 == ch)flag = !flag;
			else {
				cin >> x >> y;//�ƶ����ӱ��
				if (ch == 3 && Right[y] == x)swap(x, y);
				if (ch != 3 && flag)ch = 3 - ch;

				if (1 == ch && Left[y] == x)continue;
				if (2 == ch && Right[y] == x)continue;

				int Rx = Right[x], Lx = Left[x], Ry = Right[y], Ly = Left[y];
				if (1 == ch) { link(Lx, Rx); link(Ly, x); link(x, y); }
				else if (2 == ch) { link(Lx, Rx); link(y, x); link(x, Ry); }
				else if (3 == ch) {
					if (x == Left[y]) { link(Lx, y); link(y, x); link(x, Ry); }
					//else if (x == Right[y]) { link(Ly, x); link(x, y); link(y, Rx); }
					else { link(Lx, y); link(y, Rx); link(Ly, x); link(x, Ry); }
				}
			}
		}
		long long ans = 0;
		int b = 0;
		for (int i = 1; i <= n; i++) {
			b = Right[b];
			if (i % 2 == 1)ans += b;
		}
		if (flag && 0 == n % 2)ans = n * (n + 1) / 2 - ans;
		cout << "Case " << Case++ << ": " << ans << endl;
	}
}