#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//��
	FILE* pf = fopen("text.txt", "r");//��ʱ��ȡ�ļ�Ҫ��"r"�ķ�ʽ��
	//�ж��Ƿ�򿪳ɹ�
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//��������
	int i;
	while ((i = fgetc(pf)) != EOF)
	{
		printf("%c ", i);
	}
	//�ر�
	if (fclose(pf) == EOF)
	{
		//�ر�ʧ��
		perror("fclose");
		return 1;
	}
	pf = NULL;
	return 0;
}