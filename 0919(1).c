#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[10] = { 1,2,3 };    //����ȫ��ʼ��
//	char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";      //δָ����С����������ʼ����
//	printf("%d\n", sizeof(arr4));        //sizeof����arr4��ռ�ռ�Ĵ�С
//	printf("%d\n", strlen(arr4));        //���ַ����ĳ��ȣ���\0֮ǰ���ַ�����
//	return 0;
//}

//1 strlen��sizeofû���κι���
//2 strlen�����ַ������ȵ�-ֻ������ַ����󳤶�    -�⺯��-ʹ��ʱ������ͷ�ļ�
//3 sizeof������������顢���͵Ĵ�С-��λ���ֽ�    -������


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1)); 
//	printf("%d\n", strlen(arr2));       //strlen��ȥѰ��\0 �Ҳ������ʶ����������
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
//������ʹ���±������ʵģ��±��0��ʼ
//�������ڴ�����������ŵ�


//��ά����
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5 };
//	int arr2[3][4] = { {1,2,3},{4,5} };
//	int arr3[][4]= { {1,2,3,4},{6,5,7,8} };         //ֻ��ʡ���У��в���ʡ��
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
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);     //�������ڴ�����������ŵ�
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


