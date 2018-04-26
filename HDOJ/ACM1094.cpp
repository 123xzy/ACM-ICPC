#include<iostream>

using namespace std;

int main()
{
	int n,x,i;
	while(cin>>n){
		int sum=0;
		for(i=1;i<=n;i++){
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
	}				
	return 0; 
}
