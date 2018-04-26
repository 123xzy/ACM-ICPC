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
		int mark[1005] = { 0 };             //定义数组来表示日历，显示该日期是否被安排
		int N,sum=0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> my[i].date;
		}
		for (int i = 0; i < N; i++) {
			cin >> my[i].score;
		}
		sort(my, my+N, compare);           //按课程的分数从高到低排序
		for (int i = 0; i < N; i++) {
			int j = my[i].date;
			while(j) {                     //尽量将课程安排在截止日期那一天，如果截止日期已经被安排，往前推，最后依旧无法安排，则放弃该课程
				if (mark[j] == 0) {        //如果该截止日期未被安排
					mark[j] = 1;           
					break;
				}
				j--;                       //如果该日期被安排，检查之前一天的日期
				}
			if (j == 0)sum = sum + my[i].score;   //如果无法安排，只好放弃
		}
		cout << sum << endl;
	}
	return 0;
}