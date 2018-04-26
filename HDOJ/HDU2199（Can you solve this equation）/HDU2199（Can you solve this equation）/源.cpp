#include<iostream>
#include<stdio.h>
#include<math.h>
#define flag 1.0e-6
using namespace std;
double fx(double x)
{
	return 8 * pow(x,4) + 7 * pow(x, 3) + 2 * pow(x, 2) + 3 * x + 6;
}
int main()
{
	int T; cin >> T;
	while(T--)
	{
		double y; cin >> y;
		double f;
		double x_max = 100.0, x_min = 0.0, x_mid=50.0;
		if (y < 6 || y>fx(100))
		{
			puts("No solution!"); continue;
		}
		f = fx(x_mid);
		while (fabs(f-y) >flag)
		{
			if (f > y) { x_max = x_mid; x_mid = (x_max + x_min) / 2; }
			else { x_min = x_mid; x_mid = (x_max + x_min) / 2; }
			f = fx(x_mid);
		}
		printf("%.4lf\n", x_mid);
	}
}