#include <stdio.h>


//struct Peo
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int high;                  //Peo是结构体类型
//};
//
//
//int main()
//{
//	struct Peo p1 = { 0 };     //p1是结构体变量
//	return 0;
//}





//起
//struct Peo
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int high;               
//};
//
//struct St
//{
//	struct Peo p;      //嵌套
//	int num;
//	float f;
//};
//
//void print2(struct Peo* sp)
//{
//	printf("%s %d %s %d", sp->name, sp->age, sp->sex, sp->high);
//}
//
//void print1(struct Peo ssp)
//{
//	printf("%s %d %s %d\n", ssp.name, ssp.age, ssp.sex, ssp.high);
//}
//
//int main()
//{
//	struct Peo p1 = { "张三",20,"男",177 };
//	struct St s = { { "李四",20,"女",166 },100,3.14f };
//	printf("%s %d %s %d\n", p1.name, p1.age, p1.sex, p1.high);
//	printf("%s %d %s %d %d %f\n", s.p.name, s.p.age, s.p.sex, s.p.high,s.num,s.f);
//
//	print1(p1);                //实参传给形参，但是这时候实参和形参都会开辟相应的数据地址，会造成内存的浪费
//	print2(&p1);               //见结论
//	return 0;
//}
//函数传参时，参数是需要压栈的
// 如果传递的一个结构体对象的时候，结构体太大，参数压栈的系统开销会比较大，因此会导致性能的下降
// 结构体传参的时候，尽量传结构体的地址
//止





//统计二进制中1的个数
//int count_num_of_1(int n)
//{
//	//方法一：
//	//int i = 0;
//	//int count = 0;
//	//for (i = 0;i < 32;i++)
//	//{
//	//	if ((n >> i) & 1 == 1)
//	//		count++;
//	//}
//	//return count;             //步进
//	//方法二：
//	int i = 0;           
//	int count = 0;
//	/*for (i = 0;i < 32;i++)
//	{
//		if (n != 0)
//			count++;
//		n = n & (n - 1);
//	}*/
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}


//判断两个数中个二进制数不同的数量
//int count_diff_bit1(int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((a >> i & 1) != (b >> i&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_diff_bit2(int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	int c = a ^ b;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, & n);
//	int num1 = count_diff_bit1(m, n);
//	int num2 = count_diff_bit2(m, n);
//	printf("%d\n%d\n", num1,num2);
//	return 0;
//
//}




//画x
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < n;j++)
			{
				if (i == j)
					printf("*");
				else if (i + j == n - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}