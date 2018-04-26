#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n){
		int sum=0,x;
		for(int i=0;i<n;i++){
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
	}
	
 } 
