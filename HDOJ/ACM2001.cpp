#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double x1,y1,x2,y2;
	double s;
	
	while(cin>>x1>>y1>>x2>>y2)
	{
		s=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<s<<endl;
	}
	
	return 0;
}
