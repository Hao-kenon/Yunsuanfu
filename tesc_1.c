#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//	int a = 16;
//	int b = a >> 2;
// //���Ʋ�����
//	//00000000000000000000000000010000
//	//�ƶ�������λ
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 2;
//	printf("%d\n", b);
//	//ԭ�룬���룬����
//	//1000000000000000000000000000001 - ԭ��
//	//1111111111111111111111111111110 - ����
//	//1111111111111111111111111111111 - ����
//	return 0; 
//}

//int main()
//{
//	int a = 8;
//	int b = a << 2;
//	//���Ʋ���������߶������ұ߲���  
//	return 0;
//}

//int main()
//{
//	//&  ��������
//	int a = 3;
//	//0011
//	int b = 5;
//	//0101
//	int c = a & b;
//	//0001
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//| �����ƻ�
//	int a = 5;
//	//0101
//	int b = 3;
//	//0011
//	int c = a | b;
//	//0111
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//^ ���������
//	int a = 5;
//	//0101
//	int b = 3;
//	//0011
//	int c = a ^ b;
//	//0110
//	printf("%d\n", c);
//	return 0;
//}


//��������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before: a=%d,b=%d\n", a, b);
//	int temp;//��ʱ����
//	temp = a;
//	a = b;
//	b = temp;
//
//
//	//�Ӽ���-���ܻ����
//	/*a = a + b;
//	a = a - b;
//	b = a - b;*/
//
//
//	//��򷽷�
//	/*a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;*/
//	printf("after:  a=%d,b=%d", a, b);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	/*while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}*/
//	printf("%d\n", count);
//	return 0;
//
//}


//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5)); //�����ڱ��ʽ����������
//	printf("%d\n", s);//s = 0       s = a + 5 ����������
//	//int a = 0;
//	//char b = 'w';
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	//printf("%d\n", sizeof(b));
//	//printf("%d\n", sizeof(char));
//
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(int[10]));
//	//return 0;
//
//}

//int main()
//{
//	//int a = 0;
//	////  ~��������λȡ��
//	//printf("%d\n", ~a);
//
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	//1011
//	//0100
//	//1<<2
//	//0001
//	//1111
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	//00000000000000000000000000001111
//	//1<<2
//	// ~
//	//11111111111111111111111111111011  &
//	//00000000000000000000000000001111
//	//00000000000000000000000000001011
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//   0  ��������ǰ��Ϊ�㣬���߲���������
//	i = a++ || ++b || d++;//1 3 3 4  
//	printf("%d\n%d\n%d\n%d\n", a, b, c, d); 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//if (a > 5)
//	//	b = 5;
//	//else
//	//	b = -5;
//	//b = (a > 5 ? 5 : -5);  
//
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b); //(exp1 ? exp2 : exp3);��Ŀ�����
//	return 0;
//}