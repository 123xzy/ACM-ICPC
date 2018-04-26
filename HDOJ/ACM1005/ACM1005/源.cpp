#include<stdio.h>
/*
#define MAXN 1000000
int a[MAXN] = {0,1,1};
int fx(int A, int B, int n)
{
for (int i = 3; i <= n; i++) {
a[i] = (a[i - 1] * A + a[i - 2] * B) % 7;
printf("%d", a[i]);
printf(" ");
}

return a[n];
}
int main()
{
int a, b, n;
while (scanf_s("%d %d %d", &a, &b, &n) != EOF,a||b||n) {
printf("%d", fx(a, b, n));
}
return 0;
}
*/
#define MAXN 50
int main()
{
	int A, B, n;
	int a[MAXN] = { 0,1,1 };
	while (scanf_s("%d %d %d", &A, &B, &n), A || B || n) {
		int j = n % 49;
		for (int i = 3; i <= j; i++) {
			a[i] = (A*a[i - 1] + B*a[i - 2]) % 7;
			//printf("%d", a[i]);
		}
		printf("%d\n", a[j]);
	}
	return 0;
}
