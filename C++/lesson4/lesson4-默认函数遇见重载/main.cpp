#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*拥有默认参数的函数*/
int func(int a, int b, int c = 1)
{
	return a + b + c;	
} 

int func(int a, int b)
{
	return a + b;
}

int func(int a)
{
	return a;
}

typedef int (*p_func)(int a);

//typedef void (*p_func)(int a);

int main(int argc, char *argv[]) {
	
	p_func p = func;
	
	printf("p(1) = %d\n", p(1));
	
	//printf("func(1, 2) = %d\n", func(1, 2));//重载的二义性 （ambiguous） 
	
	return 0;
}
