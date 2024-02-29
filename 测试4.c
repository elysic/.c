#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct S
{
	int age;
	char name[20];
	char sex[5];
};
int main()
{
	struct S L = { 20,"张三","男" };
	//打开
	FILE* pf = fopen("text.txt", "w");
	//判断是否打开成功
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//输入数据
	fprintf(pf, "%d %s %s", L.age, L.name, L.sex);
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