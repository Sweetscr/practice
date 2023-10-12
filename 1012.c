///调试
//



#include <stdio.h>
#include <string.h>
#include <assert.h>


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 12;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}



//void my_strcpy(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, const char* src)          //const :常对象，见下，可以保证src中的内容（源数据）不被改变，因此若src要改变时，会报错
//{
//	assert(dest != NULL);
//	assert(src != NULL);             //判断的表达式，若为假则会报错
//	while (*dest++ = *src++)       //当走到 \0 时，\0的ASCII码值为0，故为假，因此便走出循环
//	{
//		;
//	}
//}


//为何要改为返回char*?
//为了实现链式访问  （链式访问：将一个程序的返回值作为另外一个程序的参数）
//strcpy返回的是目标空间的起始地址
char* my_strcpy(char* dest, const char* src)          //const :常对象，见下，可以保证src中的内容（源数据）不被改变，因此若src要改变时，会报错
{
	assert(dest != NULL);
	assert(src != NULL);             //判断的表达式，若为假则会报错
	while (*dest++ = *src++)       //当走到 \0 时，\0的ASCII码值为0，故为假，因此便走出循环
	{
		;
	}
}

int main()
{
	char arr1[20] = "***********##";
	char arr2[] = "hello bit";

	//strcpy在拷贝字符串的时候会把原字符串的 \0 也拷贝进去
	//strcpy(arr1, arr2);

	char* p = NULL;
	//my_strcpy(arr1, p);
	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);    //链式访问:printf("%s\n",my_strcpy(arr1,arr2));
	return 0;
}



//程序例1：
//int main()
//{
//	const int num = 10;
//	num = 20;
//	printf("%d\n", num);    //这个时候改不了，因为const定义了恒定数字
//	return 0;    
//}

//int main()
//{
//	const int num = 10;
//	//const 修饰指针变量
//	//1.const 放在*左边 ：意思是：p指向的对象不能通过p来改变了，但是p变量本身的值时可以改变的
//	const int* p = &num;
//
//    //*p = 20; //err
//	p = 20;   //ok
//
//	printf("%d\n", num);    //这个时候改成了，相当于关了门，从窗户里进去改了变量
//	return 0;    
//}

//int main()
//{
//	const int num = 10;
//	//const 修饰指针变量
//	//1.const 放在*右边 ：意思是：p指向的对象可以通过p来改变的，但是不能修改p变量本身的值
//	int* const p = &num;
//	int const* p = &num; //两边都加上const
//	*p = 0;//ok
//	int n = 100;
//	p = &n;//err
// 
//
//	printf("%d\n", num);    //这个时候改成了，相当于关了门，从窗户里进去改了变量
//	return 0;
//}