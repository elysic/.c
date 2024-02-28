#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//打开
	FILE* pf = fopen("text.txt", "r");//此时读取文件要用"r"的方式打开
	//判断是否打开成功
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读入数据
	int i;
	while ((i = fgetc(pf)) != EOF)
	{
		printf("%c ", i);
	}
	//关闭
	if (fclose(pf) == EOF)
	{
		//关闭失败
		perror("fclose");
		return 1;
	}
	pf = NULL;
	return 0;
}