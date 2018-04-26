#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n&&n){
		int max=0,i;
		while(n--){
			cin>>i;
			if(i>max)max=i;
		}
		cout<<max<<endl;
	}
	return 0;
}
