#include<iostream>
#define MAXN 100

using namespace std;

char a[MAXN];
int main()
{
	int n, i;
	cin >> n;
	while (n--)
	{
		for (i = 1; i <= 11; i++)
			cin >> a[i];
		a[6]='6';
		cout<<a[6];
		for (i = 7; i<= 11; i++)
			cout << a[i];
		cout<<endl;
	}
	return 0;
}
