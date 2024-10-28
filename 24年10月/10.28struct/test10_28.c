#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//人
//类型-不占空间
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p3,p4;//全局变量

struct St
{
	struct Peo p;
	int num;
	float f;
};

void print1(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
}
void print2(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员变量
}

//p1是结构体变量
int main()
{
	struct Peo p1 = {"张三","1221443634","男",181};//结构体变量的创建
	struct St s = { {"李四","121321412","女",166},100,3.14f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
	print1(&p1);//结构体传参尽量传地址
	print2(p1);
	return 0;
}


