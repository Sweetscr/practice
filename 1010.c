#include <stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//指针类型决定了：指针走一步走多远（指针的步长）
//char 走一个字节
//int 走四个字节
//double 走八个字节

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//野指针：指针指向的位置是随机的不可知的
//野指针成因：
//1、指针未初始化
//2、指针越界访问


//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int* p3 = NULL;   //空指针
//	if (p3 != NULL)
//	{
//		*p3 = 100;       //空指针的使用
//	}
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0;i < sz;i++)
//	//{
//	//	arr[i] = 1;
//	//}
//	int* p = &arr;
//	//for (i = 0;i < sz;i++)
//	//{
//	//	*p  = 1;
//	//	p++;
//	//}
//	for (i = 0;i < sz;i++)
//	{
//		*(p+i) = 1;
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[5]);    //指针-指针 得到的是指针和指针之间元素的个数
//	return 0;
//}
//不是所有的指针都能相减
//指向同一块空间的2个指针才能相减！




//数组的访问
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//} 
//arr[i]->*(arr+i)     arr代表首元素的地址



//int main()
//{
//	int a = 10;
//	int* pa = &a;      //pa是个指针变量，一级指针变量
//	int** ppa = &pa;   //ppa是二级指针变量
//	**ppa = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	//parr就是存放指针的数组 即指针数组
//	int* parr[10] = { &a,&b,&c };
//
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}



int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 5,6,7,8 };
	int arr3[4] = { 9,10,11,12 };

	int* parr[3] = {arr1,arr2,arr3};   //arr表示首元素的地址

	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ", parr[i][j]);    //parr[i]相当于数组地址，因此不需要解引用
		}
		printf("\n");
	}
	return 0;
}