#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>;

void print_table(int a);

int main()
{
	int a = 0;
	printf("��������Ҫ�ĳ˷��ھ�������;");
	scanf("%d", &a);
	print_table(a);
	return 0;
}

void print_table(int a)
{
        //���ѭ������,������ 
        int i = 0;
        //�ڲ�ѭ������,������  
        int j = 0;
        for (i = 1; i <= a; i++)
        {
            for (j = 1; j <= i; j++) 
            {
                printf("%dx%d=%-3d  ", j, i, i * j);
            }
            //ÿ����������  
            printf("\n");
        }
}