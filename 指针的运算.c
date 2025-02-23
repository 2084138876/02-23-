#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 1 指针 +- 整数 
//#define N_VALUES 5

//int main()
//{
//	float values[N_VALUES];
//	float* vp;//未初始化，没有使用，没问题，不初始化直接使用会出现问题
//	for (vp = &values[0]; vp < &values[N_VALUES];)//没有使用，不算越界
//	{
//		*vp++ = 0;// *vp=0;   vp++;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//数组名是数组首元素地址
//	// 第一种
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;//数组下标写法，arr[i]=*(arr+i)
//	}
//	// 第二种
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	// 第三种
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

// 2 指针 - 指针
//  指针 - 指针  的绝对值，是两个指针之间的元素的个数；
// 不是所有的指针都能相减的，指向同一块空间的指针才能相减
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	printf("%d\n", &arr[0] - &arr[9]);//-9
//	
//	//printf("%d\n", &arr[9] - &ch[0]);// 错误
//	return 0;
//}

// 求字符串的长度
//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//
//}
//int my_strlen(char* ch)
//{
//	char* start = ch;
//
//	while (*ch != '\0')
//	{
//		ch++;
//	}
//	return ch - start;
//}

//int main()
//{
//	char str[] = "abcdef";//内存中放的是   abcdef\0
//	//注意，不要定义成 char str="abcdef",那样就错了
//	//int len=strlen(str); //使用库函数
//	//int len= strlen("abcdef");// 使用库函数，求得值不含\0
//	// int len=my_strlen(str);
//	//int len = my_strlen("abcdef");//字符串传参传的是首元素地址，即是首个字符的地址
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}


// 3 指针的关系运算

//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//for (vp = &values[N_VALUES]; vp > &values[0];)
//	//{
//	//	vp--;
//	//	*vp = 0;
//	//	//*vp--=0;
//	//}
//
//
//	for (vp = &values[N_VALUES-1]; vp >= &values[0];vp--)
//	{//但是，不建议这样写
//	//因为c语言的标准规定，允许指向数组元素的指针   与指向数组最后一个元素后面的那个内存位置的指针进行比较
//	// 但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
//		*vp = 0;
//	}
//	return 0;
//}