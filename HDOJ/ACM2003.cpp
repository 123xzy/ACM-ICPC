#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double x;
	
	while(cin>>x)
	{
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<abs(x)<<endl;
	}
	
	return 0;
}
