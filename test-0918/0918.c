#include <stdio.h>
//#include "Add.h"

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("和为 %d", sum);
//	return 0;
//}



//递归：自己调用自己
//递归：少量的代码完成多次重复的运算（大事化小）

//int main()            //最简答的递归
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//递归常见错误：栈溢出
//栈区：局部变量；函数形参
//堆区：动态开辟的内存
//静态区：全局变量



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
//递归的两个必要条件：1 存在限制条件，当满足这个限制条件的时候，递归便不再继续
//                    2 每次递归调用之后越来越接近这个限制条件



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

//不使用任何临时变量
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



//求n的阶乘

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


//int Fib(int i)        //会浪费很多很多次运算
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
	//TDD  测试驱动开发
	ret = Fib(n);
	printf("ret=%d\n", ret);
}


//汉诺塔问题
//青蛙跳台阶问题