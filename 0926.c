#include <stdio.h>

//int main()
//{
//	int a = 5 / 2;  //商2余1   a=2
//	int b = 5 % 2;  //取模操作符   b=1
//	double c = 5 / 2.0;     //左右两边必须有一个是浮点数
//	double d = 5 % 2;     //左右两边不能是浮点数
//	printf("%d %d %lf\n", a, b, c);
//	return 0;
//}


//
//int main()
//{
//	//移位操作符
//	//>> 右移操作符
//	int a = 2;
//	int b = a >> 1;
//	printf("%d %d\n", a, b);
//	//右移操作符
//	//1、算术右移：  右边丢弃，左边补原符号位   //用的是算术右移
//	//2、逻辑右移：  右边丢弃，左边用零填充
//	return 0;
//}


//int main()
//{
//	//左移操作符
//	int a = 6;
//	int b = a << 1;
//	printf("%d %d", a, b);
//	return 0;
//}
////左移操作符有x2的效果


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;  //按位与
//	int d = a | b;  //按位或
//	inte = a ^ b;  //按位异或
//	return 0;
//}



//交换a与b
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("%d %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d\n", a, b);    //方法一：临时变量
//	a = a + b;
//	b = a - b;
//	a = a - b;                
//	printf("%d %d\n", a, b);    //方法二：加减法,缺点：可能会溢出
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);    //方法三：异或法
//	return 0;
//
//}


//求一个整数在内存中二进制位中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	/*while (num)
//	{
//		if (num % 2 == 1);
//		count++;
//		num = num / 2;
//	}*/                              //方法一：缺点 只对正数有效
//
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = -5;
//	a = !a;
//	printf("%d\n", a);
//	return 0;
//}


int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof 计算的变量所占内存空间的大小，单位是字节
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));  //4

	printf("%d\n", sizeof(char));  //1
	printf("%d\n", sizeof(c));  //1

	printf("%d\n", sizeof(p));  //8
	printf("%d\n", sizeof(char*));  //8

	printf("%d\n", sizeof(arr));  //40
	printf("%d\n", sizeof(int [5]));  //20

	return 0;
}










