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

//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//char ��һ���ֽ�
//int ���ĸ��ֽ�
//double �߰˸��ֽ�

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


//Ұָ�룺ָ��ָ���λ��������Ĳ���֪��
//Ұָ�����
//1��ָ��δ��ʼ��
//2��ָ��Խ�����


//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int* p3 = NULL;   //��ָ��
//	if (p3 != NULL)
//	{
//		*p3 = 100;       //��ָ���ʹ��
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
//	printf("%d\n", &arr[9] - &arr[5]);    //ָ��-ָ�� �õ�����ָ���ָ��֮��Ԫ�صĸ���
//	return 0;
//}
//�������е�ָ�붼�����
//ָ��ͬһ��ռ��2��ָ����������




//����ķ���
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
//arr[i]->*(arr+i)     arr������Ԫ�صĵ�ַ



//int main()
//{
//	int a = 10;
//	int* pa = &a;      //pa�Ǹ�ָ�������һ��ָ�����
//	int** ppa = &pa;   //ppa�Ƕ���ָ�����
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
//	//parr���Ǵ��ָ������� ��ָ������
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

	int* parr[3] = {arr1,arr2,arr3};   //arr��ʾ��Ԫ�صĵ�ַ

	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ", parr[i][j]);    //parr[i]�൱�������ַ����˲���Ҫ������
		}
		printf("\n");
	}
	return 0;
}