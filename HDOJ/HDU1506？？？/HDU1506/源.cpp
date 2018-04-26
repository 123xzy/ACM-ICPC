#include<iostream>
#include<algorithm>
#include<sring.h>
#define MAXN 1000005
using namespace std;
typedef long long ll;
int stack[MAXN] = { 0 };
int main()
{
	int n,height,top=0; 
	while (cin >> n&&n)
	{
		int ans;
		for (int i = 1; i <= n; i++)
		{
			cin >> height;
			if (height > stack[top])     //如果高度比栈顶元素高，则入栈
				stack[++top] = height;
			else {
				int rw=0, lw=1;
				while (height <= stack[top])   
				{
					ans = max(ans, (rw + lw)*height);

				}
			}
		}
	}
}
