#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//��
	FILE* pf = fopen("text.txt", "w");
	//�ж��Ƿ�򿪳ɹ�
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//��������
	fputs("hello", pf);
	fputs("world", pf);
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
