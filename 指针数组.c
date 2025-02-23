#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//指针数组：存放指针的数组就是指针数组

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
//	//parr就是存放指针的数组，即指针数组
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


// 指针模拟二维数组
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
//			printf("%d ", parr[i][j]);//parr[i]是&arr1  &arr2  &arr3   也就是 arr1 arr2 arr3
//			// [] 就相当于解引用，parr[i] 就是  *(parr+i)
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
