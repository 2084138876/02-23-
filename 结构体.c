#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//结构：结构是一些值的集合，这些值称为成员变量。结构的每个成员可以说是不同类型的变量。
//结构体：类似于　类　　用 struct 关键字声明

	//举例 
	// 方法1
	//struct People
	//{
	//	char name[20];
	//	char tel[12];
	//	char sex[5];//一个汉字是两个字符，再加上一个  \0   5个字符
	//	int high;
	//};

	// 方法2
	/*struct People
	{
		char name[20];
		char tel[12];
		char sex[5];
		int high;
	}p1,p2;*///创建结构体的同时，创建两个对象 p1和p2
	//p1 和p2 是使用struct People结构类型创建的两个变量
	//p2 和p2 是全局的变量



//struct People
//{
//	char name[20];
//	char tel[12];
//	char sex[3];//一个汉字是两个字符，再加上一个  \0   
//	int high;
//};
//
//
////一个结构体里面可以有其他结构体的对象   也就是 续写
//// 举例
//struct Stu
//{
//	struct People p;
//	int num;
//	float f;//浮点数在内存中是无法准确储存的
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
//	// 创建结构体变量   也就是 对象
//	//struct People p1;
//
//	//初始化结构体变量
//	struct People p1 = { "张三","15517718811","男",175 };
//	struct Stu s1 = { {"李四","11212312344","女",166},100,3.14 };
//	//结构体可以不完全初始化
//
//	// 结构体变量 用 .          结构体地址用 -> 
//	// 结构体对象.成员变量      结构体指针 -> 成员变量
//	printf("%s %s %s %d\n", p1.name, p1.tel, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s1.p.name, s1.p.tel, s1.p.sex, s1.p.high, s1.num, s1.f);
//	print(&p1);//传对象的地址
//	print1(p1);//传对象名字
//	// 传地址效率更高！
//	return 0;
//}