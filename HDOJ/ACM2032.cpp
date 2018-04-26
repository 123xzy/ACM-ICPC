#include<iostream>
#define MAXN 105

using namespace std;

int a[MAXN][MAXN];
int main()
{
	int i,j,n;
	while(cin>>n)
	{
		a[1][1]=0;
		for(i=1;i<=n;i++){
		
			for(j=1;j<=i;j++){
				if(j==1||j==i) a[i][1]=1,a[i][i]=1;
				else a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
		for(i=1;i<=n;i++){
		
			for(j=1;j<=i;j++){
				cout<<a[i][j];
				if(i!=j)cout<<" ";
			}	
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
