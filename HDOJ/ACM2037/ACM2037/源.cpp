/*�㷨����:��򵥵�̰���㷨��Ҫ�뿴���������ĵ��ӣ�����ѡ��ʼʱ����������ʱ����̵Ľ�Ŀ������Ҫѡ�����ʱ����̵Ľ�ĿΪ֮���
��Ŀ�ṩ�����ʱ�䣬��ÿһ����Ҫ������ʱ��̣�����˵̰��*/
/*���⻹�漰��һ��sort������ͷ�ļ���algorithm���ú�����������������ʼ��ַ��������ַ�����򷽷�����Ҫ�Ӵ�С����ʱ��Ҫ����һ���Ƚ�
������Ҳ���Ǳ����е�bool������Ԫ��end������������*/

#include<iostream>
#include<algorithm>
using namespace std;
class time
{
public :
	int start;
	int end;
};
bool temp(time a, time b)
{
	return a.end < b.end;
}
int main()
{
	int n;
	time a[105];
	while (cin>> n&&n) {
		int count = 1;
		for (int i = 0; i < n; i++) {
			cin>> a[i].start >> a[i].end;
		}
		sort(a, a + n,temp);
		int key = a[0].end;
		for (int i = 1; i < n; i++) {
			if (a[i].start >= key) {
				count++;
				key = a[i].end;
			}
		}
		cout << count << endl;
	}
	return 0;
}