#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int i,a,b;
		for(i=0;i<=n;i++){
			cin>>a>>b;
			cout<<"Case "<<i<<":"<<endl;
			cout<<a<<"+"<<b<<"="<<a+b;
		}
	}
	return 0;
}
