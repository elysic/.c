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
	struct S L = { 20,"����","��" };
	//��
	FILE* pf = fopen("text.txt", "w");
	//�ж��Ƿ�򿪳ɹ�
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//��������
	fprintf(pf, "%d %s %s", L.age, L.name, L.sex);
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