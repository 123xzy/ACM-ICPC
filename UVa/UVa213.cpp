#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

//重写读取字符的函数 
int readchar(){
	for(;;){
		int ch=getchar();
		if(ch!='\n'&&ch!='\r')return ch;//一直读到非换行符为止 
	} 
} 

//读取编码，并做处理 
int readint(int c){
	int v=0;
	while(c--){
		v=v*2+readchar()-'0';
	}
	return v;
}

//保存编码对应的字符，len表示编码长度，val表示对应的十进制值 
int code[8][1<<8];

//读取编码头，并做处理 
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
			int len = readint(3); //读取编码开头三个字符并计算长度
			if(len==0)break;//结束标志
			for(;;){
				int v=readint(len);//读取长度为len的编码
				if(v==(1<<len)-1)break;//结束标志
				putchar(code[len][v]); 
			} 
		}
		putchar('\n');
	}
	return 0;
}
