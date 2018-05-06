#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

#define MAXN 25

int q[MAXN],n;

//模拟官员转圈，并返回选中人的编号 
int give(int p,int m,int s)
{
	while(s--){
		do{
			p=(p+n+m-1)%n+1;
		}while(q[p]==0);
	}
	return p;
}

int main()
{
	int k,m;
	while(cin>>n>>k>>m&&n!=0){
		memset(q,1,sizeof(q));
		int left = n;
		int p1=n,p2=1;
		while(left){
			p1=give(p1,1,k);
			p2=give(p2,-1,m);
			printf("%3d",p1);
			left--;
			if(p1!=p2){
				printf("%3d",p2);
				left--;
			} 
			q[p1]=q[p2]=0;
			if(left)printf(","); 
		}
		printf("\n");
	}
}
