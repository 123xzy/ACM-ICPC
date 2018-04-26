#include<iostream>

using namespace std;

int main()
{
	int n;
	
	while(cin>>n){
		int i,sum=0;
		for(i=1;i<=n;i++)
			sum+=i;
		cout<<sum<<endl<<endl;
	}
	
	return 0;
 } 

