#include<iostream>

using namespace std;

int main()
{
	int a,b,n;
	cin>>n;
	while(n--){
		int sum1=0,sum2=0;
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			if(a%i==0) sum1+=i;
		}
		for(int j=0;j<=b;j++){
			if(b%j==0) sum2+=j;
		}
		if(sum1==b&&sum2==a)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}
