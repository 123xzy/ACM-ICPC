#include<iostream>
#include<stack>
#include<stdio.h>
#include<string>
using namespace std;

//定义表示矩阵的数据结构
struct Matrix {
	int a, b;
	Matrix(int a = 0, int b = 0) :a(a), b(b) {}//构造函数，将矩阵初始化为长宽均为0
}m[26];

stack<Matrix> s;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char name;
		cin >> name;
		int k = name - 'A';//将ABC转换成数组下标
		cin >> m[k].a >> m[k].b;
	}

	string exp;
	while (cin >> exp)
	{
		int len = exp.length();
		bool flag = false;
		int ans = 0;
		for (int i = 0; i < len; i++)
		{
			//如果是字母就入栈
			if (isalpha(exp[i]))s.push(m[exp[i] - 'A']);
			else if (exp[i] == ')') 
			{
				Matrix m2 = s.top(); s.pop();
				Matrix m1= s.top(); s.pop();//注意m1和m2顺序
				if (m1.b != m2.a) { flag = true; break; }
				ans += m1.a*m1.b*m2.b;
				s.push(Matrix(m1.a, m2.b));
			}
		}
		if (flag)cout << "error" << endl;
		else cout << ans << endl;
	}
	return 0;
}

