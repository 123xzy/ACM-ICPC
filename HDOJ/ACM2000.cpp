#include<iostream>
using namespace std;
int main()          //方法一 
{
    char a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>=b && a>=c && b>=c) cout<<c<<" "<<b<<" "<<a<<endl;
        else if(a>=b && a>=c && c>=b) cout<<b<<" "<<c<<" "<<a<<endl;
        else if(b>=a && b>=c && a>=c) cout<<c<<" "<<a<<" "<<b<<endl;
        else if(b>=a && b>=c && c>=a) cout<<a<<" "<<c<<" "<<b<<endl;
        else if(c>=a && c>=b && a>=b) cout<<b<<" "<<a<<" "<<c<<endl;
        else  cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}

int main()           //方法二：冒泡排序法 
{
	
 } 
