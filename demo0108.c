//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
	printf("�ҵ��� λ���ǵ�%d�� ��%d��\n", i+1, j+1);
}
	
int main()
{
	int a = 0;
	/*int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		printf("����������-->");
		scanf("%d", &arr[i]);
	}
	int right = sizeof(arr) / sizeof(int)-1;
	Exchange(arr,right);*/
	int arr[3][3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j ++ )
		{
			printf("����������->");
			scanf("%d", &arr[i][j]);
		}
	}
	printf("��������Ҫ���ҵ���->");
	scanf("%d", &a);
	Yangshi(arr,a);
	system("pause");
	return 0;
}
