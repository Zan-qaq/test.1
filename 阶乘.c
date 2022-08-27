#include<stdio.h>
int main()
{
	int a = 0;
	int ret = 1;
	int b = 1;
	scanf_s("%d", &a);
	while (a>1)
	{
		b = a--;
		ret = b * ret;
	}
	printf("%d", ret);
	return 0;
}
