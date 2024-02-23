#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char a1[5], a2[5], a3[5], a4[5];
//	scanf("%s%s", a1, a2);
//	gets(a3);
//	gets(a4);
//	puts(a1); puts(a2); puts(a3); puts(a4);
//
//}
//main()
//{
//	char a[80] = "AB", b[80] = "LMNP";
//	int i = 0;
//	strcat(a, b);
//	puts(a);
//	while (a[i] != '\0')
//	{
//		i++;
//		b[i] = a[i];
//	}
//	puts(b);
//}
int main()
{
	int a[10] = { 1,2,2,3,4,3,4,5,1,5};
	int n = 0, i, c, k;
	int j = 0;
	for (i = 0; i < 10 - n; i++)
	{
		c = a[i];
		for(j=j+1;j<10-n;j++)
			if (a[j] == c)
			{
				for (k = j; k < 10 - n; k++)
					a[k] = a[k + 1];
				n++;
			}
	}
	for (i = 0; i < (10 - n); i++)
		printf("%d", a[i]);
	printf("\n");
}
