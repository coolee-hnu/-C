#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��
//����-��ռ�ռ�
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p3,p4;//ȫ�ֱ���

struct St
{
	struct Peo p;
	int num;
	float f;
};

void print1(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//�ṹ��ָ��->��Ա����
}
void print2(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//�ṹ�����.��Ա����
}

//p1�ǽṹ�����
int main()
{
	struct Peo p1 = {"����","1221443634","��",181};//�ṹ������Ĵ���
	struct St s = { {"����","121321412","Ů",166},100,3.14f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
	print1(&p1);//�ṹ�崫�ξ�������ַ
	print2(p1);
	return 0;
}


