#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*内联函数的使用*/
inline int func(int a, int b)
{
	return a < b ? a : b;
} 

/*使用G++编译器的拓展语法，强制函数内联*/
inline int f_inline(int a, int b) __attribute__((always_inline));
int f_no_inline(int a, int b);

int add(int a, int b = 1, int c = 0)
{
	return a + b + c;
}

/*占位参数的函数*/
int placeholder(int a, int = 0)
{
	return a;
} 

int main(int argc, char *argv[]) {
	
	int c = func(1, 2);
	printf("c = %d\n", c);
	
	/*测试G++的__attribute__((always_inline))强制内联*/ 
	int r1 =  f_inline(1, 2);
	
	int r2 =  f_no_inline(1, 2);
	
	/*测试默认参数的函数*/
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
