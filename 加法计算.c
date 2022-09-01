#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int Add(x,y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	int num=Add(a, b);
	printf("%d", num);
	return 0;
}
