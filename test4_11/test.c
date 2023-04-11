#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//计算器
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add   2.sub****\n");
//	printf("****3.mul   4.div****\n");
//	printf("****     0.exit  ****\n");
//	printf("*********************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*pfarr[])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//			printf("选择错误\n");
//	} while (input);
//	return 0;
//}

//void calc(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作符数:>");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d" ,& input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int(*pf)(int, int);
//	int(*pfarr[4])(int,int);
//	int(*(*ppfarr)[4])(int, int) = &pfarr;
//	return 0;
//}
//void print(char* str)
//{
//	printf("hehe:%s",str);
//}
//void test(void(*P)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print); 
//	return 0;
//}
//void a(int arr[],int sz)
//{
//
//}
//int main()
//{
//	//冒泡排序函数
//	//冒泡排序只能排序整型数组
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / aizeof(arr[0]);
//	a(arr, sz);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int* arr[10];
//	int* (*pa)[10] = &arr;
//	int(*paadd)(int,int) = add;
//	int(*(*paaaa)[5])(int, int) = &paadd;
//	int  sum = paadd(1, 2);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main（）
//{
//
//	return 0；
//}
struct stu 
{
	char name[20];
	int age;
};
int a(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test()
{
	float f[] = { 9.0,7.0,6.5,4.5 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), a);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ",f[i]);
	}
}
int b_age(const void* e1,const void*e2)
{
	return((struct stu*)e1)->age - ((struct stu*)e2)->age;
}int b_name(const void* e1,const void*e2)
{
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
}
void test1()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), b_age);
	qsort(s, sz, sizeof(s[0]), b_name);
	//1.首元素地址
	//2.元素个数
	//3.每个元素大小
	//4.函数指针：比较两个元素的所用函数的地址-这个函数使用者自己实
	//            现函数指针的两个叁数是：待比较的两个元素的地址
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//printf("%s ", s->name);
		printf("%d ", s->age);
	}
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//实现冒泡排序的程序员，他是否知道未来排序的数据类型-不知道
//那程序员也不知道，待比较的两个元素的类型
void sort(void* base,int sz,int width,int(*cmp)(void* e1,void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			//两个元素的比较
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
int main()
{
	test4();
	return 0;
}