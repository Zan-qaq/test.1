#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>;

void print_table(int a);

int main()
{
	int a = 0;
	printf("输入你想要的乘法口诀表列数;");
	scanf("%d", &a);
	print_table(a);
	return 0;
}

void print_table(int a)
{
        //外层循环变量,控制行 
        int i = 0;
        //内层循环变量,控制列  
        int j = 0;
        for (i = 1; i <= a; i++)
        {
            for (j = 1; j <= i; j++) 
            {
                printf("%dx%d=%-3d  ", j, i, i * j);
            }
            //每行输出完后换行  
            printf("\n");
        }
}