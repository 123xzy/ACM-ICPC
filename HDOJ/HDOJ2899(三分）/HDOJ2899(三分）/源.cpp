/*#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
#define flag 1e-6
double val(double x,double y)
{
return 6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * pow(x, 2) - x*y;
}
double der(double x)
{
return 42 * pow(x, 6) + 48 * pow(x, 5) + 21 * pow(x, 2) + 10 * x;
}
int main()
{
int t; cin >> t;
while (t--)
{
double  y; cin >> y;
double x_mid=50.0, x_min = 0.0, x_max = 100.0;
while (abs(der(x_mid) - y) > flag)
{
if (der(x_mid) > y) { x_max = x_mid; x_mid = (x_max + x_min) / 2; }
else { x_min = x_mid; x_mid = (x_min + x_max) / 2; }
}
printf("%.4lf\n", val(x_mid, y));
}
}*/
#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
#define flag 1e-6
double Fx(double x, double y)
{
	return 6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * pow(x, 2) - x * y;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		double  y; cin >> y;
		double x_mid1, x_min = 0, x_max = 100, x_mid2;
		while ((x_max - x_min)>flag)
		{
			x_mid1 = (x_max + 2 * x_min) / 3;
			x_mid2 = (2 * x_max + x_min) / 3;
			if (Fx(x_mid1, y) < Fx(x_mid2, y))
				x_max = x_mid2;
			else x_min = x_mid1;
		}
		printf("%.4lf\n", Fx(x_max, y));
	}
}