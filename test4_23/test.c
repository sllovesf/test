#include<stdio.h>
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T t;
//	int a;
//	double d;
//};
//int main()
//{
//	struct S s = { 'c',{90.00,20},10,3.14 };
//	printf("%c", s.c);
//	printf("%d", s.a);
//	printf("%.2f", s.d);
//	printf("%.2f", s.t.weight);
//	return;
//}
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };  
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print(&s);
//	return 0;
//}
struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}