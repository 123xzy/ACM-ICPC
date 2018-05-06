#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

//��д��ȡ�ַ��ĺ��� 
int readchar(){
	for(;;){
		int ch=getchar();
		if(ch!='\n'&&ch!='\r')return ch;//һֱ�����ǻ��з�Ϊֹ 
	} 
} 

//��ȡ���룬�������� 
int readint(int c){
	int v=0;
	while(c--){
		v=v*2+readchar()-'0';
	}
	return v;
}

//��������Ӧ���ַ���len��ʾ���볤�ȣ�val��ʾ��Ӧ��ʮ����ֵ 
int code[8][1<<8];

//��ȡ����ͷ���������� 
int readcodes(){
	memset(code,0,sizeof(code));
	code[1][0]=readchar();
	for(int len=2;len<=7;len++){
		for(int i=0;i<(1<<len)-1;i++){
			int ch=getchar();
			if(ch==EOF)return 0;
			if(ch=='\n'||ch=='\r')return 1;
			code[len][i]=ch;
		}
	}
	return 1;
}

int main(){
	while(readcodes()){
		for(;;){
			int len = readint(3); //��ȡ���뿪ͷ�����ַ������㳤��
			if(len==0)break;//������־
			for(;;){
				int v=readint(len);//��ȡ����Ϊlen�ı���
				if(v==(1<<len)-1)break;//������־
				putchar(code[len][v]); 
			} 
		}
		putchar('\n');
	}
	return 0;
}
