#include<stdio.h>
int lcm_a(int a, int b)  //定义一个求最大公约数的函数
{
	int m, n, c, lcm;     //使用辗转相除法
	m = a;
	n = b;
	while (n != 0) {
		c = m%n;
		m = n;
		n = c;
	}
	lcm = a/m*b;   //未了防止溢出，写成这种形式
	return lcm;
}
int main()
{
	int n, x;
	scanf_s("%d", &n);
	while (n--)
	{
		int x,lcm=1;
		scanf_s("%d", &x); //注意x为1的时候
		for (int i = 0; i<x; i++) {
			int j;
			scanf_s("%d", &j);
			lcm=lcm_a(lcm, j);
		}
		printf("%d\n", lcm);
	}
	return 0;
}

