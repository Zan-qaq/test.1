#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�Զ��庯��
int num_reserch(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{	
			right = mid - 1;
		}    
		else
		{
			return mid;
		}	
	}
	return -1;
}



int main()
{
	int k = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	int ret = num_reserch(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ������");
	}
	else
	{
		printf("���ҵ�ָ�����֣��±�����Ϊ��%d\n", ret);
	}
	return 0;
}
