#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>;

int count_bit_one(unsigned int a);

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d", count);
	return 0;
}

int count_bit_one(unsigned int a)//unsigned�����޷�������_ʹ�ú���������������
{
	int count = 0;
	while (a)
	{
		if (a % 2 == 1)
		{	     
			count++;
	    }
		a = a / 2;
	}
	return count;
}