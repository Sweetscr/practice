#include <stdio.h>

//�ҳ������е�����һ��Ԫ��
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
//			printf("������%d\n",arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//������ң��������




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
	printf("�����ǣ�%d\n", ret);

	return 0;
}



