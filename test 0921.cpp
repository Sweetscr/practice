#include <stdio.h>

//找出数组中单独的一个元素
//int main()
//{
//
//		int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		int count = 0;
//		int j = 0;
//		for(j = 0;j < sz;j++)
//		{
//			if(arr[i]==arr[j])
//				{
//					count++;
//				}
//		}
//		if (count == 1)
//		{
//			printf("单数：%d\n",arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//逐个查找，暴力求解




int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	for (i = 0;i < sz;i++)
	{
		ret = ret ^ arr[i];
	}
	printf("单数是：%d\n", ret);

	return 0;
}



