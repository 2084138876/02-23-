#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���飺һ����ͬ���͵�Ԫ�صļ���
//ָ���������һ����������ŵ��ǵ�ַ

//int main()
//{
//	int arr[10] = { 0 };
//	//��������������Ԫ�صĵ�ַ
//	// arr �ȼ���  &arr[0]
//	int* p = arr;// int* p=&arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//ͨ��ָ������������
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//
//	}*/
//	for (i = 0; i < sz; i++)
//	{
//		// p+i ==  &arr[0] +i ==  &arr[i]
//		printf("%p ----- %p -----��%p\n", p + i,&arr[i],&arr[0]+i);//%p������ӡ��ַ
//		// arr[i]  ==  *(arr+i)
//	}
//
//	return 0;
//}