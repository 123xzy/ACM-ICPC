#include<stdio.h>
#include<math.h>
#include<algorithm>
#define MAXN 105
struct  point    //��
{
	int x, y;
}p[MAXN];
int find_minY(point p)//�ҳ������п�����y��С�ĵ�
{

}
double cross(point p1,point p2,point p3)//��˼���
{
	return (p2.x - p1.x)*(p3.y - p1.y) - (p2.y - p1.y)*(p3.x - p1.x);
}
int push()//�ж���Щ����Ϊ����
{}
double distance()//�����������
{}
double sum()//��������
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
