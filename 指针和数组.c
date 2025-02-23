#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组：一类相同类型的元素的集合
//指针变量：是一个变量，存放的是地址

//int main()
//{
//	int arr[10] = { 0 };
//	//数组名是数组首元素的地址
//	// arr 等价于  &arr[0]
//	int* p = arr;// int* p=&arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//通过指针来访问数组
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//
//	}*/
//	for (i = 0; i < sz; i++)
//	{
//		// p+i ==  &arr[0] +i ==  &arr[i]
//		printf("%p ----- %p -----　%p\n", p + i,&arr[i],&arr[0]+i);//%p用来打印地址
//		// arr[i]  ==  *(arr+i)
//	}
//
//	return 0;
//}