#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 1 ָ�� +- ���� 
//#define N_VALUES 5

//int main()
//{
//	float values[N_VALUES];
//	float* vp;//δ��ʼ����û��ʹ�ã�û���⣬����ʼ��ֱ��ʹ�û��������
//	for (vp = &values[0]; vp < &values[N_VALUES];)//û��ʹ�ã�����Խ��
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
//	int* p = arr;//��������������Ԫ�ص�ַ
//	// ��һ��
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;//�����±�д����arr[i]=*(arr+i)
//	}
//	// �ڶ���
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	// ������
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

// 2 ָ�� - ָ��
//  ָ�� - ָ��  �ľ���ֵ��������ָ��֮���Ԫ�صĸ�����
// �������е�ָ�붼������ģ�ָ��ͬһ��ռ��ָ��������
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	printf("%d\n", &arr[0] - &arr[9]);//-9
//	
//	//printf("%d\n", &arr[9] - &ch[0]);// ����
//	return 0;
//}

// ���ַ����ĳ���
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
//	char str[] = "abcdef";//�ڴ��зŵ���   abcdef\0
//	//ע�⣬��Ҫ����� char str="abcdef",�����ʹ���
//	//int len=strlen(str); //ʹ�ÿ⺯��
//	//int len= strlen("abcdef");// ʹ�ÿ⺯�������ֵ����\0
//	// int len=my_strlen(str);
//	//int len = my_strlen("abcdef");//�ַ������δ�������Ԫ�ص�ַ�������׸��ַ��ĵ�ַ
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}


// 3 ָ��Ĺ�ϵ����

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
//	{//���ǣ�����������д
//	//��Ϊc���Եı�׼�涨������ָ������Ԫ�ص�ָ��   ��ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ����бȽ�
//	// ���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
//		*vp = 0;
//	}
//	return 0;
//}