#include<iostream>
using namespace std;
int main()
{
	int t;
	while(cin>>t){
		int sum=1;
		for(int i=0;i<t;i++){
			int x;
			cin>>x;
			if(x%2!=0)sum*=x;
		}
		cout<<sum<<endl;
	}
	return 0;
 } 
