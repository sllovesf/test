#include<stdio.h>

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int* p;
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//	} 
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;//NULL-用来初始化指针
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d", *p);
//		p=p + 1;
//	}
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	int*** pppa = &ppa;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}
//描述一个学生，一些数据
//typedef struct Stu
//{ 
//	char name[20];
//	short age;
//	char rele[12];
//	char sex[5];
//}Stu;//全局变量
//int main()
//{
//	Stu s1 = {"张三",20,"18110634234","男"};
//	struct Stu s2 = {"李四",23,"23131424324","男"};//局部变量
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello,bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.s.arr);
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char rele[12];
//	char sex[5];
//}Stu;//全局变量
//void Print1(Stu tmp)
//{
//	printf("name:%s\n",tmp.name);
//	printf("age:%d\n",tmp.age);
//	printf("rele:%s\n",tmp.rele);
//	printf("sex:%s\n",tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("rele:%s\n", ps->rele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四", 40, "4729472957", "男" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = add(a, b);
	return 0;
}