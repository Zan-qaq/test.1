#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Fib(int X)
{
	if (X <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(X - 1) + Fib(X - 2);
	}
}

int main()
{
	int num = 0;
	printf("��������õ��ĵ�n��쳲����������:\n");
	scanf("%d", &num);
	int ret = Fib(num);
	printf("ret=%d\n", ret);
	return 0;
}