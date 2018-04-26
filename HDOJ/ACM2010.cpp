#include<iostream>

using namespace std;

int main()
 {
 	int n,m,i,t;
 	
 	while(cin>>n>>m){
 		 int flag=0;
 		 
 		for(i=n;i<=m;i++){
 			int a=0,b=0,c=0;
			a=i%10;
 			b=i/10%10;
 			c=i/100%10;
 			if(i==a*a*a+b*b*b+c*c*c){
			 	if(flag!=0) cout<<" ";
			 	cout<<i;
 				flag++;
	     	}
		 }
		 
		if(flag==0)
		 	cout<<"no";
		cout<<endl;
			 	
}
    return 0;
 }
