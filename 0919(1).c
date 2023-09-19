#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[10] = { 1,2,3 };    //不完全初始化
//	char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";      //未指定大小的数组必须初始化。
//	printf("%d\n", sizeof(arr4));        //sizeof计算arr4所占空间的大小
//	printf("%d\n", strlen(arr4));        //求字符串的长度，求\0之前的字符个数
//	return 0;
//}

//1 strlen和sizeof没有任何关联
//2 strlen是求字符串长度的-只能针对字符串求长度    -库函数-使用时需引用头文件
//3 sizeof计算变量、数组、类型的大小-单位是字节    -操作符


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1)); 
//	printf("%d\n", strlen(arr2));       //strlen会去寻找\0 找不到，故而产生随机数
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%c\n", arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i < len;i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}
//数组是使用下标来访问的，下标从0开始
//数组在内存中是连续存放的


//二维数组
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5 };
//	int arr2[3][4] = { {1,2,3},{4,5} };
//	int arr3[][4]= { {1,2,3,4},{6,5,7,8} };         //只能省略行，列不可省略
//	char ch[5][6];
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);     //数组在内存中是连续存放的
//		}
//		printf("\n");
//
//	}
//	
//	return 0;
//}



int main()
{
	int arr[3][4];
	int sz = sizeof(arr) / sizeof(0);
	printf("%d\n", sz);
	return 0;
}


