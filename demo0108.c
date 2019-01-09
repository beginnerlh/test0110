//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
void Exchange(int arr[10],int right)
{
	for (int i = 0; i <= right; i++)
	{
		for (int j = i + 1; j <= right; j++)
		if (arr[i] % 2 == 0)
		{
			if (arr[j] % 2 != 0)
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				break;
			}
		}
	}
	for (int i = 0; i <= right; i++)
	{
		printf("%d ", arr[i]);
	}
}
void Yangshi(int arr[3][3], int a)
{
	int i = 0;
	int j = 2;
	while (a != arr[i][j])
	{
		if (a > arr[i][j])
		{
			i += 1;
		}
		else if (a < arr[i][j])
		{
			j -= 1;
		}
	}
	printf("找到了 位置是第%d行 第%d列\n", i+1, j+1);
}
	
int main()
{
	int a = 0;
	/*int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		printf("请输入数字-->");
		scanf("%d", &arr[i]);
	}
	int right = sizeof(arr) / sizeof(int)-1;
	Exchange(arr,right);*/
	int arr[3][3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j ++ )
		{
			printf("请输入数字->");
			scanf("%d", &arr[i][j]);
		}
	}
	printf("请输入你要查找的数->");
	scanf("%d", &a);
	Yangshi(arr,a);
	system("pause");
	return 0;
}
