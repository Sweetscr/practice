#include <stdio.h>


//struct Peo
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int high;                  //Peo�ǽṹ������
//};
//
//
//int main()
//{
//	struct Peo p1 = { 0 };     //p1�ǽṹ�����
//	return 0;
//}





//��
//struct Peo
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int high;               
//};
//
//struct St
//{
//	struct Peo p;      //Ƕ��
//	int num;
//	float f;
//};
//
//void print2(struct Peo* sp)
//{
//	printf("%s %d %s %d", sp->name, sp->age, sp->sex, sp->high);
//}
//
//void print1(struct Peo ssp)
//{
//	printf("%s %d %s %d\n", ssp.name, ssp.age, ssp.sex, ssp.high);
//}
//
//int main()
//{
//	struct Peo p1 = { "����",20,"��",177 };
//	struct St s = { { "����",20,"Ů",166 },100,3.14f };
//	printf("%s %d %s %d\n", p1.name, p1.age, p1.sex, p1.high);
//	printf("%s %d %s %d %d %f\n", s.p.name, s.p.age, s.p.sex, s.p.high,s.num,s.f);
//
//	print1(p1);                //ʵ�δ����βΣ�������ʱ��ʵ�κ��βζ��Ὺ����Ӧ�����ݵ�ַ��������ڴ���˷�
//	print2(&p1);               //������
//	return 0;
//}
//��������ʱ����������Ҫѹջ��
// ������ݵ�һ���ṹ������ʱ�򣬽ṹ��̫�󣬲���ѹջ��ϵͳ������Ƚϴ���˻ᵼ�����ܵ��½�
// �ṹ�崫�ε�ʱ�򣬾������ṹ��ĵ�ַ
//ֹ





//ͳ�ƶ�������1�ĸ���
//int count_num_of_1(int n)
//{
//	//����һ��
//	//int i = 0;
//	//int count = 0;
//	//for (i = 0;i < 32;i++)
//	//{
//	//	if ((n >> i) & 1 == 1)
//	//		count++;
//	//}
//	//return count;             //����
//	//��������
//	int i = 0;           
//	int count = 0;
//	/*for (i = 0;i < 32;i++)
//	{
//		if (n != 0)
//			count++;
//		n = n & (n - 1);
//	}*/
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}


//�ж��������и�����������ͬ������
//int count_diff_bit1(int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((a >> i & 1) != (b >> i&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_diff_bit2(int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	int c = a ^ b;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, & n);
//	int num1 = count_diff_bit1(m, n);
//	int num2 = count_diff_bit2(m, n);
//	printf("%d\n%d\n", num1,num2);
//	return 0;
//
//}




//��x
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < n;j++)
			{
				if (i == j)
					printf("*");
				else if (i + j == n - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}