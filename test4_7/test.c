#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <100; i++)
//	{
//		printf("%d", i);
//	}
//	for (i = 0; i <100; i++)
//	{
//		printf("%d", 10-i);
//	}
//	return 0;
//}
//F5-启动调试，和F9-断点配合使用
//F10-逐过程
//F11-逐语句
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = add(a, b);
//	return 0;
//}
//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 1;
//	}
//	
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		ret = 1;
//		for (j = 1; j <=i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = ret + sum;
//	}
//	printf("%d", sum);
//	return 0;
//}
void my_strcpy(char* dest, char* src)
{
	while (*src !='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;//'\0'
}
int main()
{
	char arr1[] = "############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}