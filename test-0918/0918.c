#include <stdio.h>
//#include "Add.h"

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("��Ϊ %d", sum);
//	return 0;
//}



//�ݹ飺�Լ������Լ�
//�ݹ飺�����Ĵ�����ɶ���ظ������㣨���»�С��

//int main()            //����ĵݹ�
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//�ݹ鳣������ջ���
//ջ�����ֲ������������β�
//��������̬���ٵ��ڴ�
//��̬����ȫ�ֱ���



//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//�ݹ��������Ҫ������1 ���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//                    2 ÿ�εݹ����֮��Խ��Խ�ӽ������������



//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		*str++;
//	}
//	return count;
//}

//��ʹ���κ���ʱ����
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}



//��n�Ľ׳�

//int Fac1(int i)
//{
//	if (i != 1)
//	{
//		return i * Fac1(i - 1);
//	}
//}

//int Fac1(int i)
//{
//	int j = 0;
//	int ret = 1;
//	for (j = 1;j <= i;j++)
//	{
//		ret *= j;
//	}
//	return ret;
//}
//
//int Fac2(int i)
//{
//	if (i > 1)
//	{
//		return i * Fac2(i - 1);
//	}
//	else if(i=1)
//	{
//		return 1;
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d", &n);
//	ret1=Fac1(n);
//	ret2 = Fac2(n);
//	printf("%d\n%d",ret1,ret2);
//	return 0;
//}


//int Fib(int i)        //���˷Ѻܶ�ܶ������
//{
//	if(n<=2)
//      return 1;
//  else
//      return Fib(n-1)+Fib(n-2);
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD  ������������
	ret = Fib(n);
	printf("ret=%d\n", ret);
}


//��ŵ������
//������̨������