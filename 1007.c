#include <stdio.h>

//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;                           //a++ ��ʹ�ú�++   ++a��++��ʹ��,      ��a=0ʱ��aΪ�٣���˺��治�ټ���
//	i = a++ || ++b || d++;
//	printf("i=%d\na=%d\nb=%d\nc=%d\nd=%d\n", i,a, b, c, d);
//	return 0;
//}
//& | ��λ��/��λ���ö�������������/�����
//&&  ||  �߼������߼��򣬹�ע���ֱ�������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	//���ű��ʽ�����������μ��㣬��������һ�α��ʽ�Ľ��
//
//	return 0;
//}



//����һ���ṹ������-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",20,"20231009" };
//	struct Stu* ps = &s1;
//	printf("%s ", ps->name);
//	printf("%d ", ps->age);
//	//printf("%s ", (*ps).name);
//	//printf("%d ", (*ps).age);
//	//printf("%s ", s1.name);
//	//printf("%d ", s1.age);
//	//printf("%s\n", s1.id);
//	return 0;
//}



//����������
//��������������
//char c1=-1��
//10000001
//��λ�������λ
//11111111 11111111 11111111 10000001

//��������������
//char c2=1;
//00000001
//��λ�������λ
//00000000 00000000 00000000 00000001

//�޷�������������������λ��0

int main()
{
	char a = 0xb6;         //0x 16����
	return 0;
}