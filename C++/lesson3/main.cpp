#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*����������ʹ��*/
inline int func(int a, int b)
{
	return a < b ? a : b;
} 

/*ʹ��G++����������չ�﷨��ǿ�ƺ�������*/
inline int f_inline(int a, int b) __attribute__((always_inline));
int f_no_inline(int a, int b);

int add(int a, int b = 1, int c = 0)
{
	return a + b + c;
}

/*ռλ�����ĺ���*/
int placeholder(int a, int = 0)
{
	return a;
} 

int main(int argc, char *argv[]) {
	
	int c = func(1, 2);
	printf("c = %d\n", c);
	
	/*����G++��__attribute__((always_inline))ǿ������*/ 
	int r1 =  f_inline(1, 2);
	
	int r2 =  f_no_inline(1, 2);
	
	/*����Ĭ�ϲ����ĺ���*/
	printf("add(2) = %d\n", add(2));
	printf("add(2, 0) = %d\n", add(2, 0)); 

	printf("placeholder(2,3) = %d\n",placeholder(2));

	return 0;
}

inline int f_inline(int a, int b)
{
	return a < b ? a : b;
}
int f_no_inline(int a, int b)
{
	return a < b ? a : b;
}
