///����
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

//void my_strcpy(char* dest, const char* src)          //const :�����󣬼��£����Ա�֤src�е����ݣ�Դ���ݣ������ı䣬�����srcҪ�ı�ʱ���ᱨ��
//{
//	assert(dest != NULL);
//	assert(src != NULL);             //�жϵı��ʽ����Ϊ����ᱨ��
//	while (*dest++ = *src++)       //���ߵ� \0 ʱ��\0��ASCII��ֵΪ0����Ϊ�٣���˱��߳�ѭ��
//	{
//		;
//	}
//}


//Ϊ��Ҫ��Ϊ����char*?
//Ϊ��ʵ����ʽ����  ����ʽ���ʣ���һ������ķ���ֵ��Ϊ����һ������Ĳ�����
//strcpy���ص���Ŀ��ռ����ʼ��ַ
char* my_strcpy(char* dest, const char* src)          //const :�����󣬼��£����Ա�֤src�е����ݣ�Դ���ݣ������ı䣬�����srcҪ�ı�ʱ���ᱨ��
{
	assert(dest != NULL);
	assert(src != NULL);             //�жϵı��ʽ����Ϊ����ᱨ��
	while (*dest++ = *src++)       //���ߵ� \0 ʱ��\0��ASCII��ֵΪ0����Ϊ�٣���˱��߳�ѭ��
	{
		;
	}
}

int main()
{
	char arr1[20] = "***********##";
	char arr2[] = "hello bit";

	//strcpy�ڿ����ַ�����ʱ����ԭ�ַ����� \0 Ҳ������ȥ
	//strcpy(arr1, arr2);

	char* p = NULL;
	//my_strcpy(arr1, p);
	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);    //��ʽ����:printf("%s\n",my_strcpy(arr1,arr2));
	return 0;
}



//������1��
//int main()
//{
//	const int num = 10;
//	num = 20;
//	printf("%d\n", num);    //���ʱ��Ĳ��ˣ���Ϊconst�����˺㶨����
//	return 0;    
//}

//int main()
//{
//	const int num = 10;
//	//const ����ָ�����
//	//1.const ����*��� ����˼�ǣ�pָ��Ķ�����ͨ��p���ı��ˣ�����p���������ֵʱ���Ըı��
//	const int* p = &num;
//
//    //*p = 20; //err
//	p = 20;   //ok
//
//	printf("%d\n", num);    //���ʱ��ĳ��ˣ��൱�ڹ����ţ��Ӵ������ȥ���˱���
//	return 0;    
//}

//int main()
//{
//	const int num = 10;
//	//const ����ָ�����
//	//1.const ����*�ұ� ����˼�ǣ�pָ��Ķ������ͨ��p���ı�ģ����ǲ����޸�p���������ֵ
//	int* const p = &num;
//	int const* p = &num; //���߶�����const
//	*p = 0;//ok
//	int n = 100;
//	p = &n;//err
// 
//
//	printf("%d\n", num);    //���ʱ��ĳ��ˣ��൱�ڹ����ţ��Ӵ������ȥ���˱���
//	return 0;
//}