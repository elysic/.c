#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include< string.h >
main()
{
	char w[][10] = { "ABCD", "EFGH", "IJKL","MNOP" },k;
	for (k = 1; k < 3; k++) printf("%s\n", &w[k][k]);

}