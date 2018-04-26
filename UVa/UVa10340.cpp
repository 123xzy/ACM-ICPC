#include<iostream>
#include<cstring>
#include<utility>
using namespace std;

#define MAXN 10000005
char s[MAXN];
char subs[MAXN];

int main()
{
	while (cin >> subs)
	{
		cin >> s;
		int len1 = strlen(s);
		int len2 = strlen(subs);
		int temp = 0;
		for (int i = 0; i < len1; i++)
		{
			if (s[i] == subs[temp])
				temp++;
		}
		if (temp == len2)
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;
	}
	return 0;
}
