#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�ṹ���ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա����˵�ǲ�ͬ���͵ı�����
//�ṹ�壺�����ڡ��ࡡ���� struct �ؼ�������

	//���� 
	// ����1
	//struct People
	//{
	//	char name[20];
	//	char tel[12];
	//	char sex[5];//һ�������������ַ����ټ���һ��  \0   5���ַ�
	//	int high;
	//};

	// ����2
	/*struct People
	{
		char name[20];
		char tel[12];
		char sex[5];
		int high;
	}p1,p2;*///�����ṹ���ͬʱ�������������� p1��p2
	//p1 ��p2 ��ʹ��struct People�ṹ���ʹ�������������
	//p2 ��p2 ��ȫ�ֵı���



//struct People
//{
//	char name[20];
//	char tel[12];
//	char sex[3];//һ�������������ַ����ټ���һ��  \0   
//	int high;
//};
//
//
////һ���ṹ����������������ṹ��Ķ���   Ҳ���� ��д
//// ����
//struct Stu
//{
//	struct People p;
//	int num;
//	float f;//���������ڴ������޷�׼ȷ�����
//
//};
//
//void print(struct People* p)
//{
//	printf("%s %s %s %d\n", p->name, p->tel, p->sex, p->high);
//
//}
//
//void print1(struct People p)
//{
//	printf("%s %s %s %d\n", p.name, p.tel, p.sex, p.high);
//
//}
//
//int main()
//{
//	// �����ṹ�����   Ҳ���� ����
//	//struct People p1;
//
//	//��ʼ���ṹ�����
//	struct People p1 = { "����","15517718811","��",175 };
//	struct Stu s1 = { {"����","11212312344","Ů",166},100,3.14 };
//	//�ṹ����Բ���ȫ��ʼ��
//
//	// �ṹ����� �� .          �ṹ���ַ�� -> 
//	// �ṹ�����.��Ա����      �ṹ��ָ�� -> ��Ա����
//	printf("%s %s %s %d\n", p1.name, p1.tel, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s1.p.name, s1.p.tel, s1.p.sex, s1.p.high, s1.num, s1.f);
//	print(&p1);//������ĵ�ַ
//	print1(p1);//����������
//	// ����ַЧ�ʸ��ߣ�
//	return 0;
//}