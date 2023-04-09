#include<stdio.h>
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;*/
//	char arr[] = "abcdf";
//	char* pc = arr;
//	printf("%s\n", pc);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	//*p = 'W';
//	//printf("%c", *p);
//	printf("%s", p);
//	return 0;
//} 
//int mian()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "adcdef";
//	char* p2 = "adcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//指针数组
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];//存放整型指针的数组
//	char* pch[5];
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr[i]));
//	}
//	
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5;j++)
//		{
//			printf("%d", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	//int* p = NULL;//p是整型指针
//	//char* pc = NULL;//pc是字符指针
//	//int arr[10] = { 0 };
//	//arr-首元素的地址
//	//%arr[0]-首元素的地址
//	//&arr-数组的地址
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int(*p)[10] = &arr;//上面的p就是数组指针
////	return 0;
////}
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//void test(int (*arr )[5])
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pa)(int, int)=add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void(*p)(char*) = print;
	(*p)("hello bite");
	return 0;
}
//char*(*pf)(char*,const char*)=my_strcpy
//char*(*pfarr[4])(char*,const char*)=
