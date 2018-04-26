#include<iostream>
#include<stack>
#include<stdio.h>
#include<string>
using namespace std;

//�����ʾ��������ݽṹ
struct Matrix {
	int a, b;
	Matrix(int a = 0, int b = 0) :a(a), b(b) {}//���캯�����������ʼ��Ϊ�����Ϊ0
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
		int k = name - 'A';//��ABCת���������±�
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
			//�������ĸ����ջ
			if (isalpha(exp[i]))s.push(m[exp[i] - 'A']);
			else if (exp[i] == ')') 
			{
				Matrix m2 = s.top(); s.pop();
				Matrix m1= s.top(); s.pop();//ע��m1��m2˳��
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

