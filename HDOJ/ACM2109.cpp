#include<iostream>
#include<algorithm>
#include<cstring>

#define MAXN 105

using namespace std;

int a[MAXN],b[MAXN];
int main()
{
	int n,i,x1,x2;
	while(cin>>n&&n){
		x1=x2=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n;i++){
			if(a[i]>b[i]) x1=x1+2;
			else if(a[i<b[i]]) x2=x2+2;
			else x1++,x2++;
			
		//	if(a[i]>b[i]) x1=x1+2;
		//	if(a[i]<b[i]) x2=x2+2;
		//	if(a[i]=b[i]) {
		//	x1++,x2++;}   ´íÎó£¿£¿£¿ 
			}
		cout<<x1<<" vs "<<x2<<endl;
	}	
	return 0;
}
