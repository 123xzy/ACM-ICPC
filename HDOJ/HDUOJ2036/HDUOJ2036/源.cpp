#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while (scanf("%d", &n) && n)
	{
		double area = 0.0;
		int x1, y1, x2, y2, x3, y3;
		int t = n - 2;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		while (t--)
		{
			scanf("%d%d", &x3, &y3);
			area += ((x2 - x1)*(y3 - y1) - (y2 - y1)*(x3 - x1))/2.0;
			x2 = x3;
			y2 = y3;
		}
		printf("%.1lf\n", fabs(area));
	}
	return 0;
}