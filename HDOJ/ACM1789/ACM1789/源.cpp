#include<iostream>
#include<algorithm>
using namespace std;
class student
{
public:
	int date;
	int score;          
}my[1005];
bool compare(student a, student b)
{
	return a.score > b.score;
}
int main()
{
	int T;
	cin >> T;
	while (T--) {
		int mark[1005] = { 0 };             //������������ʾ��������ʾ�������Ƿ񱻰���
		int N,sum=0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> my[i].date;
		}
		for (int i = 0; i < N; i++) {
			cin >> my[i].score;
		}
		sort(my, my+N, compare);           //���γ̵ķ����Ӹߵ�������
		for (int i = 0; i < N; i++) {
			int j = my[i].date;
			while(j) {                     //�������γ̰����ڽ�ֹ������һ�죬�����ֹ�����Ѿ������ţ���ǰ�ƣ���������޷����ţ�������ÿγ�
				if (mark[j] == 0) {        //����ý�ֹ����δ������
					mark[j] = 1;           
					break;
				}
				j--;                       //��������ڱ����ţ����֮ǰһ�������
				}
			if (j == 0)sum = sum + my[i].score;   //����޷����ţ�ֻ�÷���
		}
		cout << sum << endl;
	}
	return 0;
}