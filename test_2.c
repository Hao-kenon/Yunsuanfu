#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a, b, c;
//	int max;
//	printf("������������: \n");
//	scanf_s("%d%d%d", &a, &b, &c);
//	max = (a > (b > c ? b : c) ? a : ((b > c ? b : c)));
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//����һ���ṹ�����-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//����һ�����󣬲���ʼ��
//	struct Stu s1 = { "����",18,"20230001" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ��->��Ա��
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int main()
//{
//	//��������
//	char a = 3;
//	//00000011
//	char b = 127;
//	//01111111
//	char c = a + b;
//	printf("%d\n", c);
// //-126
//	return 0;
//}