#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ָ�����飺���ָ����������ָ������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* parr[10] = { &a,&b,&c };
//	//parr���Ǵ��ָ������飬��ָ������
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(parr[i]));
//
//	}
//
//
//	return 0;
//}


// ָ��ģ���ά����
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { &arr1,&arr2,&arr3 };//{arr1,arr2,arr3}
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);//parr[i]��&arr1  &arr2  &arr3   Ҳ���� arr1 arr2 arr3
//			// [] ���൱�ڽ����ã�parr[i] ����  *(parr+i)
//		}
//		printf("\n");
//		
//
//
//	}
//
//
//	return 0;
//}
//
