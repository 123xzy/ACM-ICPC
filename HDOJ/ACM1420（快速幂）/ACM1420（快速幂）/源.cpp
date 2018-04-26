#include<iostream>
using namespace std;
/*常规求幂
int pow(int a, int b)
{
	int sum = 1;
	while (b--)sum = sum*a;
	return sum;
}

//一般快速幂
int suppow1(int a, int b)
{
	int sum = 1, base = a;
	while (b != 0) {
		if (b % 2)sum = sum*base;//如果指数b是奇数，先乘一个本身
		base *= base;
		b /= 2;
	}
	return sum;
}
//递归快速幂
int suppow2(int a, int b)
{
	if (b == 1)return a;
	int temp = suppow2(a, b / 2);
	return (b % 2 == 0 ? 1 : a)*temp*temp;
}
//位运算快速幂
int suppow3(int a, int b)
{
	if (b == 0)return 1;
	else {
		while ((b & 1) == 0) {
			b >>= 1;
			a *= a;
		}
	}
	int  sum = a;
	b >>= 1;
	while (b != 0) {
		a *= a;
		if (b & 1)sum *= a;
		b >>= 1;
	}
	return sum;
}
//位运算快速幂
int suppow4(int a, int b)
{
	long long int sum = 1, base = a;
	while (b) {
		if (b & 1)sum *= base;
		base *= base;
		b >>= 1;
	}
	return sum;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout<<suppow3(a, b)<<endl;
	return 0;
}*/
int suppow(int a, int b,int c)
{
	long long int sum = 1, base = a;
	while (b !=0) {
		if (b % 2) sum =( sum*base)%c;   //不能先计算出幂的结果在取模，会导致数据溢出
		base=(base*base)%c;
		b /= 2;
	}
	return sum;
}
int main()
{
	int N;
	cin >> N;
	while (N--) {
		long long int  a, b, c,result;
		cin >> a >> b >> c;
		result = suppow(a,b,c);
		cout << result << endl;
	}
	return 0;
}