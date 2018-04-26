#include<iostream>
#include<cstring>
#include<sstream>
#include<string.h>
#include<queue>
using namespace std;

#define MAXN 260
char s[MAXN];

//����ڵ�
struct Node {
	bool flag;//����Ƿ񱻸�ֵ
	int value;//�ڵ�ֵ
	Node* left, *right;//���ҽڵ�
	Node() :flag(false), left(NULL), right(NULL) {}//���캯��
};

Node* root;//�������ĸ��ڵ�

bool failed;//��������ʽ����

Node* newnode() { return new Node(); }//���ڵ�Ĺ��캯����װ

//��ӽڵ�
void addnode(int v, char* s)
{
	int n = strlen(s);
	Node* u = root;//˳�Ÿ��ڵ�������
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'L') {
			if (u->left == NULL)u->left = newnode();//�ڵ㲻����
			u = u->left;//����������
		}
		else if (s[i] == 'R') {
			if (u->right == NULL)u->right = newnode();//�ڵ㲻����
			u = u->right;//����������
		}
	}
	if (u->flag)failed = true;
	u->value = v;//�ڵ㸳ֵ
	u->flag = true;//�޸ı�ǣ������Ѿ���ֵ
}

//��ȡ��������
bool readin()
{
	failed = false;
	while (scanf("%s",s)==1)
	{
		if (!strcmp(s, "()"))break;
		int v;
		sscanf(&s[1], "%d", &v);//��ȡ�ڵ���
		addnode(v, strchr(s, ',') + 1);//�ҵ���������λ�ã�Ȼ���һΪ������ַ���
	}
	return true;
}

//�������������
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