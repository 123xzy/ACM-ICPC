#include<stdio.h>
#include<math.h>
#include<algorithm>
#define MAXN 105
struct  point    //点
{
	int x, y;
}p[MAXN];
int find_minY(point p)//找出各点中靠左且y较小的点
{

}
double cross(point p1,point p2,point p3)//叉乘计算
{
	return (p2.x - p1.x)*(p3.y - p1.y) - (p2.y - p1.y)*(p3.x - p1.x);
}
int push()//判断哪些点作为定点
{}
double distance()//计算两点距离
{}
double sum()//计算距离和
{}
int main()
{
	int n;
	while (scanf("%d", &n) && n)
	{
		for (int i = 0; i < n; i++)
			scanf("%d%d", &p[i].x, &p[i].y);

	}
}
