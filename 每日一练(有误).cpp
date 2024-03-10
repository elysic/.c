#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string>
void trans(char* p, int len)
{
	char* s = new char[len];
	memcpy(s, p, len);
	for (int i = 0; i++)
	{
		p[i] = s[len - 1 - i];
	}
	delete[]s;
	s = 0;
}
void transfun(char* p, int len)
{
	int start = 0;
	int i = 0;
	int shift = 0;
	while (i < len)
	{
		for (i = start; i < len; i++)
		{
			//if (p[i] == "")
			//if (p[i] == "")
				break;
		}
		trans(p + shift, i - start);
		shift += i - start + 1;
		start = i + 1;
		i += 1;
	}
}
void output(char* p)
{
	printf("%s\n", p);
}
int main()
{
	char buf[1000] = { 0 };
	printf("ÇëÊäÈë×Ö·û´®£º");
	gets(buf);
	transfun(buf, strlen(buf));
	output(buf);
	return 0;
}