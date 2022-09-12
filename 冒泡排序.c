#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Bubble_sort(int arr[], int sz)
{
    int n = 0;
    //计算冒泡排序所要进行的趟数
    for (n = 0; n < sz-1; n++)
    {
        int m = 0;
        //每一趟冒泡算法的实现
        for (m = 0; m < sz - 1 - n; m++)
        {
            if (arr[m] > arr[m + 1])
            {
                int tmp = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = tmp;
            }

        }
    }
}

int main()
{
    int arr[] = { 10,4,5,7,2,9,8,3,1,6 };//随机乱序数组
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    Bubble_sort(arr,sz);
    for (i = 0; i < sz; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}