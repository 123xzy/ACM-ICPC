#include<iostream>
#include<cstring>
using namespace std;

#define MAXN 200

char n1[MAXN], n2[MAXN];

int main()
{
	int len1, len2;
	memset(n1, '5', sizeof(n1));
	memset(n2, '5', sizeof(n2));
	while (cin >> n1>>n2){

		len1 = strlen(n1);
		len2 = strlen(n2);

	    //Ԥ��������len1ʼ�մ���len2
		if (len1 < len2) {
			char temp[MAXN];
			strcpy(temp, n1);
			strcpy(n1, n2);
			strcpy(n2, temp);
			len1 = strlen(n1);
			len2 = strlen(n2);
		}

		int i = 0, flag = 0, j = 0,t=0;
 		while(i<len1&&j<len2) {
			 
			//������鲻ƥ�䣬�������������¼���
			if ((n1[t] - '0' + n2[j] - '0') > 3)
			{
				i++;
				j = 0;
				t = i;
			}
			else{
				t++;
				j++;
			}

			//��������ұߵ����
			if (t >= len1) {
				flag = 1;
				break;
			}
		}
		if(flag)cout << len2+i << endl;
		else cout << len1 << endl;

		memset(n1, '5', sizeof(n1));
		memset(n2, '5', sizeof(n2));
	}
}
