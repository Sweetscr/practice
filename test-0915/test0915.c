#include <stdio.h>



#include <string.h>

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20]="#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* x, int* y)   
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("转换前： %d %d\n", a, b);
//	Swap1(a, b);
//	printf("转换后(此仅变了外部数值)： %d %d\n", a, b);
//	Swap2(&a, &b);
//	printf("转换后(此转化了指针内数值)： %d %d\n", a, b);
//	return 0;
//}
//通过地址修改变量。总结：若不加*指针变量，改变的只是地址外对应的数值
//实际参数（实参）：
//真实传给函数的参数，叫做实参。实参可以是：常量、变量、表达式、函数等。无论实参是何种类型的量，在进行函数调用时，他们必须有确定的值，以便把这些值传给形参。
//形式参数（形参）
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中猜实例化（分配内存单元）所以叫做形式参数。形式参数当函数调用完成之后就自动销毁了，引出形式参数只在函数中有效。

//当实参传给形参的时候，形参其实是实参的一份临时拷贝。
//对形参的修改是不会改变实参的。


//传值调用：函数的形参嗬实参分别占有不同内存块，对形参的改变不会影响实参
//传址调用：传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方法
//          这种传参方式（传址）可以让函数和函数外边的变量建立起正真的联系，也就是函数内部可以直接操作函数外部的变量



//判断一个函数是否是素数

#include <math.h>
//int is_Prime(int n)
//{
//	int j = 2;
//	for (j = 2;j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	//int result = 0; 
//	//scanf("%d\n", &a);
//	//result = is_Prime(a);
//	//if (result == 0)
//	//	printf("%d 不是素数", a);
//	//else
//	//	printf("%d 是素数", a);       //这个结果不对，以后反思
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_Prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}



//二分查找
//                  本质上arr是一个指针
//int binary_search(int arr[], int k,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//                     传递过去的是数组arr首元素的地址
//    int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("数字位于数组下标是 %d \n",ret);
//	}
//	return 0;
//}


//void ADD(int* p)
//{
//	(*p)++;                   //++的运算优先于*，所以*p++应改为（*p）++
//}
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num = %d\n", num);
//	ADD(&num);
//	printf("num = %d\n", num);
//	ADD(&num);
//	printf("num = %d\n", num);
//	return 0;
//}



//函数的嵌套调用

//链式访问：把一个函数的返回值作为另一个函数的参数



//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));      //printf的返回值是字符的个数
//	return 0;
//}




//函数的声明：

#include "add.h"                  //引用库里面的文件采用<>    引用自己写的采用“”
int main()
{
	int a = 20;
	int b = 10;
	int sum = 0;
	sum=ADD(a, b);
	printf("%d\n", sum);
	return 0;
}

//int ADD(int, int);             //函数声明：放置于  .h  文件
//int ADD(int x, int y)          //函数的实现：放置于  .c  文件之中
//{                              //拆分功能
//	int z = x + y;
//	return z;
//}