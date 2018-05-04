#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

struct side {
	int length;
	int width;
};

void sortedge(int *a,int *b)
{
	int temp;
	if (*a <= *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

bool cmp(struct side side1, struct side side2)
{
	if (side1.length > side2.length)
		return true;
	else if (side1.length == side2.length)
		return side1.width > side2.width;
	return false;
}

int main()
{
	struct side side[7];
	while (cin >> side[1].length >> side[1].width)
	{
		sortedge(&side[1].length, &side[1].width);
		for (int i = 2; i <= 6; i++)
		{
			cin >> side[i].length >> side[i].width;
			sortedge(&side[i].length, &side[i].width);
		}
		sort(side + 1, side + 7, cmp);
		
		int flag = 1;

		for (int i = 1; i <= 6; i=i+2)
		{
			if (side[i].length != side[i + 1].length || side[i].width != side[i + 1].width)
				flag = 0;
		}
		if (side[1].length != side[3].length || side[1].width != side[5].length || side[5].width != side[3].width)
			flag = 0;

		if (flag)cout << "POSSIBLE" << endl;
		else cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}
