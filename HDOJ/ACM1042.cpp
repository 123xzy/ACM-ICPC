#include<iostream>

using namespace std;

int main()
{
	int n,i;
	
	while(cin>>n)
	{
		int sum=1;
		for(i=1;i<=n;i++)
		{
			sum*=i;
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
