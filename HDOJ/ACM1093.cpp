#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int sum=0,n,x;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
	}
	return 0;
 } 
