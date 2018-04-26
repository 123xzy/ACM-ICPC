#include<iostream>

using namespace std;

int main()
{
	int d, I,n;
	cin >> n;
	while (n--) {
		cin >> d;
		if (d == -1)break;
		cin >> I;
		
		int k = 1;
		for (int i = 0; i < d-1; i++)
		{
			if (I % 2) { k = k * 2 ; I = (I + 1) / 2; }//向左走
			else { k = k * 2+1; I = I / 2; }//向右走
		}
		cout << k << endl;
	}
	return 0;
}
