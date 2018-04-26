#include<iostream>
#include<iomanip>
#define PI 3.1415927

using namespace std;

int main()
{
	double r,v;
	
	while(cin>>r)
	{
		v=PI*r*r*r*4/3;
		cout<<fixed<<showpoint<<setprecision(3);
		cout<<v<<endl;
	}
	
	return 0;
 } 
