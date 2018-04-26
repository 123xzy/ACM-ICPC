#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int m;
	double n;
	while(cin>>n>>m){
		double sum=0;
		for(int i=0;i<m;i++){
			sum+=n;
			n=sqrt(n);
		}
		cout<<setprecision(2)<<fixed<<sum<<endl;
	}
	return 0;
}
