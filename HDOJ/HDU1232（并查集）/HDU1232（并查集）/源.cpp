#include<stdio.h>
int city[1002];
int find(int x) 
{
	int temp=x;
	while(city[temp] != temp)  //一定是while不能是if，是寻找根节点，不是父节点
		temp = city[temp];
	return temp;               
}
void merge(int a, int b)
{
	int fa, fb;
	fa = find(a);
	fb = find(b);
	if (fa != fb)
		city[fa] =fb;
}
int main()
{
	int cnum, rnum, count,x, y,i;
	while (scanf("%d", &cnum),cnum)
	{
		for (i = 1; i <=cnum; i++)
			city[i] = i;  
		for(scanf("%d",&rnum);rnum>0;rnum--)
		{
			scanf("%d %d", &x, &y);
			merge(x, y);
		}
		for (i= 1,count=-1; i <= cnum; i++)
			if (city[i] == i)
				count++;
		printf("%d\n", count);
	}
}

