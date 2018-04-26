#include<iostream>
#define MAXN 1005
using namespace std;
int add(char s1[], char s2[])
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0, maxlen = 0;
	int t1[MAXN] = { 0 }, t2[MAXN] = { 0 };
	len1 = strlen(s1); len2 = strlen(s2);
	maxlen = (len1 > len2) ? len1 : len2;
	for (i = len1 - 1; i >= 0; i--) {
		t1[j++] = s1[i] - '0';
	}
	j = 0;
	for (i = len2 - 1; i >= 0; i--) {
		t2[j++] = s2[i] - '0';
	}
	for (i = 0; i < maxlen; i++) {
		t1[i] += t2[i];
		if (t1[i] >= 10) {
			t1[i] -= 10;
			t1[i + 1]++;
		}
	}
	for (i = maxlen - 1; i >= 0; i--)
		return t1[i];
}
int main()
{

	int n;
	char a[MAXN][MAXN] = { {1},{1},{2} };
	for (int i = 4; i <= 1000; i++)
		a[i] = add(add(a[i - 1], a[i - 2]), a[i - 4]);
	while (cin >> n) 
		cout << a[n] << endl;
	return 0;
}
