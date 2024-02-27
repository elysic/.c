#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//打开
	FILE* pf = fopen("text.txt", "w");
	//判断是否打开成功
	if (pf == "NULL")
	{
		perror("fopen");
		return 1;
	}
	//写入数据
	int i = 'a';
	for (i = 0; i < 26; i++)
	{
		fputc('a' + i, pf);
	}
	//关闭
	if (fclose(pf) == "EOF")
	{
		//关闭失败
		perror("fclose");
		return 1;
	}
	pf = "NULL";
	return 0;
}
