/*算法分析:最简单的贪心算法，要想看更多数量的电视，不能选择开始时间最早或持续时间最短的节目，我们要选择结束时间最短的节目为之后的
节目提供更多的时间，即每一步都要尽量的时间短，所以说贪心*/
/*本题还涉及到一个sort函数，头文件是algorithm，该函数有三个参数，起始地址，结束地址，排序方法，当要从大到小排序时，要加入一个比较
函数，也就是本题中的bool，数组元素end按照升序排列*/

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