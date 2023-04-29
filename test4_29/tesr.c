#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	/*int n = 0;
//	scanf("%d", &n);*/
//	struct S arr[10];
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d", *(p + 1));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 1) = i;
//	}
//	return 0;
//}
