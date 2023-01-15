#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void menu()
{
	printf("************************\n");
	printf("**** 1.Add   2.Sub  ****\n");
	printf("**** 3.Mul   4.Div  ****\n");
	printf("************************\n");
}
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
//int main()
//{
//	int x, y;
//	int input;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:  printf("请输入操作数：\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2: printf("请输入操作数：\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3: printf("请输入操作数：\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4: printf("请输入操作数：\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		default: printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input=1;
//	int x, y;
//	int ret = 0;
//	int(*pf[5])(int a, int b) = { 0,Add,Sub,Mul,Div };
//	//函数指针数组存放着函数地址，可以通过数组下标来找到函数地址然后进行调用。
//	while (input)
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入操作数：\n");
//			scanf("%d %d", &x, &y);
//			ret=pf[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("% x\n", a.k);
//	return 0;
//}
//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1,
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
//#include <string.h>
#include <assert.h>
////strncpy拷贝的时候并没有拷贝最后一个\0；
//char* my_strncpy(char* dest, const char* src, int count)
//{
//	assert(dest && src);
//	char* str = dest;
//	while (count--)
//	{
//		*dest++ = *src++;
//	}
//	/**dest = '\0';*/
//	return str;
//
//}
//int main()
//{
//	char arr1[20] = "hello tao";
//	char arr2[20];
//	char *str=strncpy(arr1, arr1+2,3);
//	printf("%s", str);
//	return 0;
//}
//#include <string.h>
//char* my_strncat(char* dest, const char* src, int count)
//{
//	assert(dest && src);
//	char* str = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	int len = strlen(src);
//	if (count <= len)
//	{
//		while ((*dest++ = *src++)&&count--)
//		{
//			;
//		}
//		*dest = '\0';
//	}
//	return str;
//
//}
//int main()
//{
//	char arr1[100] = "hello world ";
//	char arr2[20]="new year coming";
//	char* str = my_strncat(arr1, arr2, 8);
//	printf("%s", str);
//
//
//}
void check(int arr[], int sz)
{
	int i;
	
	for (i = 0; i < sz; i++)
	{
		int j;
		int flag = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				flag++;
			}

		}
		if (flag == 1)
		{
			printf("%d ", arr[i]);
		}
	}
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,0,1,2,3,4,5,6,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	check(arr,sz);
	return 0;
}