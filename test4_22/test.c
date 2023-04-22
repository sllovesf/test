#include<stdio.h>
#include<ctype.h>
//int main()
//{
//	char ch = '@';
//	int ret = isdigit(ch);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	//char ch = tolower('Q');
//	//putchar(ch);
//	//printf("%c", ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 ,6,7,8,9,10};
	memmove(arr1+2, arr1,20);
	return 0;
}