#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	int b = 11;
//	b = b | (1 << 2);
//	printf("%d\n", b);
//	b = b & (~(1 << 2));
//	printf("%d\n", b);d
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	b=(a > 5 ?3 : -3);
//	printf("%d", b);
//	return 0;
//}  
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c=(a>b,a=b+10,a,b=a+1);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int get_num(int x,int y)
//{
//	return  x > y ? x : y;
//}
//int main()
//{ 
//	int a = 10;
//	int b = 20;
//	int num = get_num(a, b);
//	printf("num=%d\n", num);
//	return 0;
//}
//int num(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int get_num = num(a, b);
//	printf("%d", get_num);
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct stu s1 = {"ÕÅÈı",20,"2010431088"};
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}
int main()
{
	char a = -127;
	char b = -3;
	char c = a + b;
	printf("%d\n", c);
	return 0; 
} 