#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//} stu;//��struct Stu����Ϊstu
// struct Stu
// {
//	 char name[20];
//	 short age;
//	 char tele[12];
//	 char sex[5];
//
// }s1, s2, s3;//ȫ�ֱ���
// int main()
// {
//	 struct Stu s1 = {"����",22,"5465465456","Ů"};//�ֲ�����
//	 stu s2 = {"����",20,"152133455","��"};
//
//	 return 0;
// }
// 
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct t
//{
//	char ch[10];
//	struct s;
//	char* pc;
//
//	
//};
//int main()
//{
//	char arr[]="hello\n";
//	struct t T = { "hello",{100,"w","world",3.14},arr };
//	printf("%s\n", T.ch);
//	printf("%s\n", T.arr);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//print1(Stu*tmp)
//{
//	printf("name=%s\n", tmp->name);
//	printf("age=%d\n", tmp->age);
//	printf("tele=%s\n", tmp->tele);
//	printf("sex=%s\n", tmp->sex);
//}
//int main()
//{
//	Stu s = { "����",40,"132486654","��" };
//	print1(&s);//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
//	return 0;
//}