#include<iostream>

using namespace std;

int main()
{
	int a,b,sum;
	
	while(cin>>a>>b)
	{
		sum=a+b;
		if(sum%86==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	
	return 0;
}
