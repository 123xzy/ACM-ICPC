#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

const int MAXN = 10000;
int InOrder[MAXN],PostOrder[MAXN];//������������ͺ������
int lch[MAXN],rch[MAXN];
int n;

//��ȡÿһ�е����� 
bool readlist(int* a)
{
	string line;
	if(!getline(cin,line))return false;
	stringstream ss(line);
	n = 0;
	int x;
	while(ss >> x)a[n++] = x;
	return n > 0;
 } 
 
 //�ݹ鹹�������� 
 int build(int L1,int R1,int L2,int R2)
 {
 	if(L1 > R1)return 0;
	int root = PostOrder[R2];//������������һ���ڵ��Ǹ��ڵ�
	int p = L1;
	while(InOrder[p] != root)p++;//������������ҵ����ڵ����ڵ�λ�ã��Ҹ�λ��������p�����������Ҳ����������
	int cnt = p-L1;
	lch[root] = build(L1,p-1,L2,L2+cnt-1);
	rch[root] = build(p+1,R1,L2+cnt,R2-1);
	return root;  
  } 
  
  int best,best_sum;
  
  //�Ӹ��ڵ㿪ʼ����
  void bfs(int u,int sum)
  {
  	sum += u;
  	if(!lch[u] && !rch[u])//����ﵽ��ײ��Ҷ�ӣ�
  	{
  		if(sum < best_sum || (sum == best_sum && u < best))
  		{
  			best = u;
  			best_sum = sum;
		  }
	  }
	  if(lch[u])bfs(lch[u],sum);
	  if(rch[u])bfs(rch[u],sum);
  }
  
  int main()
  {
  	while(readlist(InOrder))
  	{
  		readlist(PostOrder);
  		build(0,n-1,0,n-1);
  		best_sum = 1000000000;
  		bfs(PostOrder[n-1],0);
  		cout<<best<<endl;
	  }
	  return 0;
  }
