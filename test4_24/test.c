#include<stdio.h>
//enum color
//{
//	red,
//	green=10,
//	blue
//};
//int ooo()
//{
//	union un
//	{
//		int i;
//		char c;
//	}u;
//
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = ooo();
//	if (1 == ret)
//		printf("С��");
//	else
//		printf("���");
//	return 0;
//}
//union un
//{
//	int a;
//	char c;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}
#include"contact.h"
void menu()
{
	printf("*************************************\n");
	printf("*********1.add       2.del    *******\n");
	printf("*********3.search    4.modify *******\n");
	printf("*********5.show      6.sort   *******\n");
	printf("*********0.exit               *******\n");
	printf("*************************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼�����������1000��Ԫ�ص�����size
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}