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
//	printf("ת��ǰ�� %d %d\n", a, b);
//	Swap1(a, b);
//	printf("ת����(�˽������ⲿ��ֵ)�� %d %d\n", a, b);
//	Swap2(&a, &b);
//	printf("ת����(��ת����ָ������ֵ)�� %d %d\n", a, b);
//	return 0;
//}
//ͨ����ַ�޸ı������ܽ᣺������*ָ��������ı��ֻ�ǵ�ַ���Ӧ����ֵ
//ʵ�ʲ�����ʵ�Σ���
//��ʵ���������Ĳ���������ʵ�Ρ�ʵ�ο����ǣ����������������ʽ�������ȡ�����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ǳ�����ȷ����ֵ���Ա����Щֵ�����βΡ�
//��ʽ�������βΣ�
//��ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ�����Խ�����ʽ��������ʽ�����������������֮����Զ������ˣ�������ʽ����ֻ�ں�������Ч��

//��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ������
//���βε��޸��ǲ���ı�ʵ�εġ�


//��ֵ���ã��������β���ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βεĸı䲻��Ӱ��ʵ��
//��ַ���ã���ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ���
//          ���ִ��η�ʽ����ַ�������ú����ͺ�����ߵı����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���



//�ж�һ�������Ƿ�������

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
//	//	printf("%d ��������", a);
//	//else
//	//	printf("%d ������", a);       //���������ԣ��Ժ�˼
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_Prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}



//���ֲ���
//                  ������arr��һ��ָ��
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
//	//                     ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//    int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("����λ�������±��� %d \n",ret);
//	}
//	return 0;
//}


//void ADD(int* p)
//{
//	(*p)++;                   //++������������*������*p++Ӧ��Ϊ��*p��++
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



//������Ƕ�׵���

//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���



//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));      //printf�ķ���ֵ���ַ��ĸ���
//	return 0;
//}




//������������

#include "add.h"                  //���ÿ�������ļ�����<>    �����Լ�д�Ĳ��á���
int main()
{
	int a = 20;
	int b = 10;
	int sum = 0;
	sum=ADD(a, b);
	printf("%d\n", sum);
	return 0;
}

//int ADD(int, int);             //����������������  .h  �ļ�
//int ADD(int x, int y)          //������ʵ�֣�������  .c  �ļ�֮��
//{                              //��ֹ���
//	int z = x + y;
//	return z;
//}