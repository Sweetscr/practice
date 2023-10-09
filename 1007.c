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
//	//i = a++ && ++b && d++;                           //a++ 先使用后++   ++a先++后使用,      当a=0时，a为假，因此后面不再计算
//	i = a++ || ++b || d++;
//	printf("i=%d\na=%d\nb=%d\nc=%d\nd=%d\n", i,a, b, c, d);
//	return 0;
//}
//& | 按位与/按位或，拿二进制数进行与/或操作
//&&  ||  逻辑与与逻辑或，关注数字本身的真假

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
//	//逗号表达式：从左到右依次计算，但输出最后一次表达式的结果
//
//	return 0;
//}



//创建一个结构体类型-struct Stu
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
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"20231009" };
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



//整型提升：
//负数的整形提升
//char c1=-1；
//10000001
//高位补充符号位
//11111111 11111111 11111111 10000001

//正数的整形提升
//char c2=1;
//00000001
//高位补充符号位
//00000000 00000000 00000000 00000001

//无符号数的整形提升，高位补0

int main()
{
	char a = 0xb6;         //0x 16进制
	return 0;
}