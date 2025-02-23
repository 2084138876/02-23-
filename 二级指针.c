#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//二级指针：二级指针/二级指针变量     是用来存放一级指针变量的地址

//int main()
//{
//	int a = 10;
//	int* pa = &a;// pa是一个指针变量，一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量
//	// 后面的*说明ppa是一个指针变量
//	// 前面的 int* 说明 指针变量的类型是 int*
//	**ppa = 20;// ppa里面是 pa的地址，*ppa指的是对ppa解引用，得到pa
//	 //pa是a的地址，**ppa == *pa == a
//
//
//	return 0;
//}