#include<iostream>
#include<cstring>
#include<sstream>
#include<string.h>
#include<queue>
using namespace std;

#define MAXN 260
char s[MAXN];

//定义节点
struct Node {
	bool flag;//标记是否被赋值
	int value;//节点值
	Node* left, *right;//左右节点
	Node() :flag(false), left(NULL), right(NULL) {}//构造函数
};

Node* root;//二叉树的根节点

bool failed;//标记输出格式错误

Node* newnode() { return new Node(); }//将节点的构造函数封装

//添加节点
void addnode(int v, char* s)
{
	int n = strlen(s);
	Node* u = root;//顺着根节点向下走
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'L') {
			if (u->left == NULL)u->left = newnode();//节点不存在
			u = u->left;//继续想左走
		}
		else if (s[i] == 'R') {
			if (u->right == NULL)u->right = newnode();//节点不存在
			u = u->right;//继续想左走
		}
	}
	if (u->flag)failed = true;
	u->value = v;//节点赋值
	u->flag = true;//修改标记，表明已经赋值
}

//读取输入数据
bool readin()
{
	failed = false;
	while (scanf("%s",s)==1)
	{
		if (!strcmp(s, "()"))break;
		int v;
		sscanf(&s[1], "%d", &v);//读取节点数
		addnode(v, strchr(s, ',') + 1);//找到逗号所在位置，然后加一为后面的字符串
	}
	return true;
}

//宽度搜索二叉树
bool bfs(vector<int>& ans)
{
	queue<Node*>q;
	ans.clear();
	q.push(root);
	while (!q.empty())
	{
		Node* u = q.front();
		q.pop();
		if (!u->flag)return false;
		ans.push_back(u->value);
		if (u->left != NULL)q.push(u->left);
		if (u->right != NULL)q.push(u->right);
	}
	return true;
}
int main()
{
	while (1)
	{
		root = newnode();
		if (!readin())break;
		vector<int> ans;
		if (!failed&&bfs(ans))
		{
			int len = ans.size();
			for (int i = 0; i < len; i++)
				printf("%d%c", ans[i], i == len - 1 ? '\n' : ' ');
		}
		else printf("not complete\n");
	}
	return 0;
}