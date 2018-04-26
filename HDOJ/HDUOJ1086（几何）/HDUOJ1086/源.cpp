/*判断AB和CD两线段是否有交点：
同时满足两个条件：('x'表示叉积)
1．C点D点分别在AB的两侧．(向量(ABxAC)*(ABxAD) <= 0)
2．A点和B点分别在CD两侧．(向量(CDxCA)*(CDxCB) <= 0)
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
double matrix(vector v1,vector v2)//叉乘
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