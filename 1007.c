#include <stdio.h>


//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;
//		for (j = 0;j < line - 1-i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0;i < line-1;i++)
//	{
//		int j = 0;
//		for (j = 0;j <= i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j <2*(line-1-i)-1 ;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//喝汽水问题，每瓶汽水1块钱，每2个空瓶子可以换1瓶汽水，20元钱可以买多少瓶汽水？
//int main()
//{
//	int g_money = 0;
//	scanf("%d", &g_money);
//	int total = g_money;
//	int empty = g_money;
//	while (empty>1 )
//	{
//		total += empty / 2;
//		empty=empty/2+empty%2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;   //当全局变量与局部变量均存在时，优先使用局部变量
//}
//
//int test()
//{
//	int a = 2;
//	a += 1;   //当全局变量与局部变量均存在时，优先使用局部变量
//	return a;
//}
//
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;       //a=1=全局变量
//}


//int main()
//{
//	double a = 3;
//	a = a / 2;
//	printf("%f", a);
//	return 0;
//}

//int main()
//{
//	double x, y;
//	x = 3;
//	y = x + 3.0 / 2;   //除法中有浮点数 结果才有浮点数
//	printf("%f", y);
//	return 0;
//}



//求m与n的最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a:b);
//	//while (1)
//	//{
//	//	if (m % a == 0 && m % b == 0)
//	//	{
//	//		break;
//	//	}
//	//	m++;
//	//}
//	//printf("%d\n", m);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", a*i);
//	return 0;
//}




//I like Beijing.  ->  Beijing. like I;
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[101] = { 0 };
	//输入
	gets(arr);
	printf("%s\n", arr);
	//倒置
	int len = strlen(arr);
	//使所有字符串反转
	reverse(arr, arr + len - 1);
	printf("%s\n", arr);
	//使单个字符串反转
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		end++;
		start = end;
	}
	printf("%s\n", arr);
	return 0;
}