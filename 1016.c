#include <stdio.h>
#include <math.h>


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//i am a student.->.tnrduts a ma i
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	//逆序
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//	printf("%s", arr);
//	return 0;
//}



//1+11+111+1111+11111+......
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0;i < n;i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}



//判断是否为水仙花数（水仙花数为3位）(扩展1~10000内)

//int main()
//{
//	//1、判断数字位数
//	int i = 0;
//	for (i - 0;i <= 10000;i++)
//	{
//		int tmp = 0;
//		tmp = i;
//		int n = 0;
//		int sum = 0;
//		while (tmp)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2、计算乘积之和
//		tmp = i;
//
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//int main()
//{
//
//	int i = 0;
//    lp:
//	scanf("%d", &i);
//	int n = 0;
//	while (i/10)
//	{
//		n++;
//		i /= 10;
//	}
//	printf("%d\n", n);
//	goto lp;
//	return 0;
//}