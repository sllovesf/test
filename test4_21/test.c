#include<stdio.h>
char* my_strstr(char* p1, char* p2)
{
	char* s1 = p1;
	char* s2 = p2;
	char* s = p1;
	if (*p2 == '\0')
		return p1;
	while (*s)
	{
		s1 = s;
		s2 = p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return s;
		s++;
		
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbbbcc";
	char arr2[] = "bbccd";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("×Ó´®²»´æÔÚ");
	else
		printf("%s", ret);
	//int len = strlen("abcdef");
	//printf("%d", len);
	return 0;
}