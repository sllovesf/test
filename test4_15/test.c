#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//#include<string.h>
//#include<assert.h>
//#include<math.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		* right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);//abcdef ---->fedcba
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf_s("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1.计算1的每一位数   n位数
//		//2.计算i的每一位数的n次方之和 sum
//		//3.比较i == sum 
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	scanf_s("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-i-1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		while ((arr[left] % 2 == 1)&&(left<right))
//		{
//			left++;
//		}
//		while ((arr[right] % 2 == 0)&&(left<right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,9,7,5,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	int len = strlen(arr);
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+len-1);
	reverse(arr,arr+len-1);
}
int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 1; i < len; i++)
	{
		left_move(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "udefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}