/*�ж�AB��CD���߶��Ƿ��н��㣺
ͬʱ��������������('x'��ʾ���)
1��C��D��ֱ���AB�����࣮(����(ABxAC)*(ABxAD) <= 0)
2��A���B��ֱ���CD���࣮(����(CDxCA)*(CDxCB) <= 0)
*/
#include<stdio.h>
#define N 105
struct point
{
	double x, y;
};
struct vector
{
	point p1, p2;
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
}vec[N];
double matrix(vector v1,vector v2)//���
{
	return v1.x*v2.y - v2.x*v1.y;
}
bool interset(vector v1, vector v2, vector v3)
{
	if (matrix(v1, v2)*matrix(v2, v3) <= 0 && matrix(v1, v3)*matrix(v1, v3))return true;
	else return false;
}

int main()
{
	int n;
	while (scanf("%d", &n) && n)
	{
		int count = 0;
		for (int i = 1; i <= n; i++) 
			scanf("%lf%lf%lf%lf", &vec[i].p1.x, &vec[i].p1.y, &vec[i].p2.x, &vec[i].p2.y);
		for (int i = 1; i <= 2*n; i++)
		{
			
		}
	}
}