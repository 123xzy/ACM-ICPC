#include<stdio.h>
int lcm_a(int a, int b)  //����һ�������Լ���ĺ���
{
	int m, n, c, lcm;     //ʹ��շת�����
	m = a;
	n = b;
	while (n != 0) {
		c = m%n;
		m = n;
		n = c;
	}
	lcm = a/m*b;   //δ�˷�ֹ�����д��������ʽ
	return lcm;
}
int main()
{
	int n, x;
	scanf_s("%d", &n);
	while (n--)
	{
		int x,lcm=1;
		scanf_s("%d", &x); //ע��xΪ1��ʱ��
		for (int i = 0; i<x; i++) {
			int j;
			scanf_s("%d", &j);
			lcm=lcm_a(lcm, j);
		}
		printf("%d\n", lcm);
	}
	return 0;
}

