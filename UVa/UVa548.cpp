#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

const int MAXN = 10000;
int InOrder[MAXN],PostOrder[MAXN];//保存中序遍历和后序遍历
int lch[MAXN],rch[MAXN];
int n;

//读取每一行的数据 
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
 
 //递归构建二叉树 
 int build(int L1,int R1,int L2,int R2)
 {
 	if(L1 > R1)return 0;
	int root = PostOrder[R2];//后序遍历的最后一个节点是根节点
	int p = L1;
	while(InOrder[p] != root)p++;//在中序遍历中找到根节点所在的位置，且该位置左侧就是p的左子树，右侧就是右子树
	int cnt = p-L1;
	lch[root] = build(L1,p-1,L2,L2+cnt-1);
	rch[root] = build(p+1,R1,L2+cnt,R2-1);
	return root;  
  } 
  
  int best,best_sum;
  
  //从根节点开始遍历
  void bfs(int u,int sum)
  {
  	sum += u;
  	if(!lch[u] && !rch[u])//如果达到最底层的叶子，
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
