#include <stdio.h>

//int main()
//{
//	int a = 5 / 2;  //��2��1   a=2
//	int b = 5 % 2;  //ȡģ������   b=1
//	double c = 5 / 2.0;     //�������߱�����һ���Ǹ�����
//	double d = 5 % 2;     //�������߲����Ǹ�����
//	printf("%d %d %lf\n", a, b, c);
//	return 0;
//}


//
//int main()
//{
//	//��λ������
//	//>> ���Ʋ�����
//	int a = 2;
//	int b = a >> 1;
//	printf("%d %d\n", a, b);
//	//���Ʋ�����
//	//1���������ƣ�  �ұ߶�������߲�ԭ����λ   //�õ�����������
//	//2���߼����ƣ�  �ұ߶���������������
//	return 0;
//}


//int main()
//{
//	//���Ʋ�����
//	int a = 6;
//	int b = a << 1;
//	printf("%d %d", a, b);
//	return 0;
//}
////���Ʋ�������x2��Ч��


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;  //��λ��
//	int d = a | b;  //��λ��
//	inte = a ^ b;  //��λ���
//	return 0;
//}



//����a��b
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("%d %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d\n", a, b);    //����һ����ʱ����
//	a = a + b;
//	b = a - b;
//	a = a - b;                
//	printf("%d %d\n", a, b);    //���������Ӽ���,ȱ�㣺���ܻ����
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);    //�����������
//	return 0;
//
//}


//��һ���������ڴ��ж�����λ��1�ĸ���
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�Ĳ������м���1
//	/*while (num)
//	{
//		if (num % 2 == 1);
//		count++;
//		num = num / 2;
//	}*/                              //����һ��ȱ�� ֻ��������Ч
//
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = -5;
//	a = !a;
//	printf("%d\n", a);
//	return 0;
//}


int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof ����ı�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));  //4

	printf("%d\n", sizeof(char));  //1
	printf("%d\n", sizeof(c));  //1

	printf("%d\n", sizeof(p));  //8
	printf("%d\n", sizeof(char*));  //8

	printf("%d\n", sizeof(arr));  //40
	printf("%d\n", sizeof(int [5]));  //20

	return 0;
}










