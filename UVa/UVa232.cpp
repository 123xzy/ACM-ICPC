#include<iostream>
#include<stdio.h>

#define NUM 10

char cross[NUM][NUM];
int buf[NUM][NUM];
int col, row,flag=1;

//�������� 
void input(int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cross[i][j] = getchar();
		getchar();
	}
}

//�б���ʼ�� 
void start()
{
	int n = 1;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			if (cross[i][j] == '*')
				continue;
			if ((j - 1) < 0 || (i - 1) < 0 || cross[i][j - 1] == '*' || cross[i - 1][j] == '*')
				buf[i][j] = n++;
		}
}

//�ҳ����� 
void find()
{
	if (flag != 1)printf("\n");
	printf("puzzle #%d:\n", flag++);
	//�ҳ�Across
	printf("Across\n");
	for(int i=0;i < row;i++)
		for (int j = 0; j < col; j++)
		{
			if (buf[i][j])
			{
				printf("%3d.%c", buf[i][j], cross[i][j]);
				j++;		
			
				while (j < col && cross[i][j]!='*')
				{
					printf("%c", cross[i][j]);
					j++;
				}
				printf("\n");
			}
		}
	//�ҳ�Down
	printf("Down\n");
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			if (buf[i][j])
			{
				int temp = i;
				printf("%3d.%c", buf[temp][j], cross[temp][j]);
				buf[temp][j] = 0;
				temp++;

				while (temp < row && cross[temp][j]!='*')
				{
					printf("%c", cross[temp][j]);
					buf[temp][j] = 0;
					temp++;
				}
				printf("\n");
			}
		}	

}
int main()
{
	while (scanf("%d%d", &row, &col) && row != 0)
	{
		getchar();
		input(row, col);
		start();
		find();
	}
	return 0;
}
