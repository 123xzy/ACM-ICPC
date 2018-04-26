#include<stdio.h>
#include<iostream>
using namespace std;

bool flag;

int judge()
{
	int WeightLeft, WeightRight, DistLeft, DistRight;
	cin >> WeightLeft >> DistLeft >> WeightRight >> DistRight;
	if (!WeightLeft)WeightLeft = judge();
	if (!WeightRight)WeightRight = judge();
	if (WeightLeft*DistLeft != WeightRight * DistRight)flag = false;
	return WeightLeft + WeightRight;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{ 
		flag = true;
		judge();
		if (flag)cout << "YES\n";
		else cout << "NO\n";
		if (T)cout << "\n";
	}
	return 0;
}
