#include<stdio.h>
#include<stdlib.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr,sz);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}
//方法一：无符号数。int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//方法二：移位。int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_bit_one(int n)//方法三：n&n-1.
//{
//	int count = 0;
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_one(a);
//	printf("count=%d\n", count);
//	//system("pause");
//	return 0;
//}
//int aaa(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	//return count_bit_one(tmp);
//	while (tmp)
//	{
//		tmp=tmp& (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = aaa(m, n);
//	printf("%d", count);
//	return 0;
//}
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i =30; i>=0; i-= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >=1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d%d", a, b);
//	return 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left <=right)
//	{
//		printf("%d ", arr[left]);
//		left++;
//	}
//}
////void print(int* p, int sz)
////{
////	int i = 0;
////	for (i = 0;i < sz;i++)
////	{
////		printf("%d ", *(p + i));
////	}
////}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////void reverse(char* arr)
////{
////	int left = 0;
////	int right = my_strlen(arr) - 1;
////	while (left < right)
////	{
////		int tmp = arr[left];
////		arr[left] = arr[right]; 
////		arr[right] = tmp;
////		left++;
////		right--;
////	}
////}
//void reverse(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//		reverse(arr+1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int a(unsigned int num)
//{
//	if (num > 9)
//		return a(num / 10) + num % 10;
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = a(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}
double pow(int n, int k)
{
	if (k < 0)
		return (1.0 / (pow(n,-k)));
	else if(k == 0)
		return 1;
	else
		return n * pow(n,k-1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}