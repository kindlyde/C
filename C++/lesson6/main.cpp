#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//volatile 每次都到内存中取值，改变了访问常量a每次要到符号表中取值的方式 
	volatile const int a = 1;
	
	int* p = NULL;
	
	p = const_cast<int*>(&a);
	
	*p = 3;
	
	printf("a = %d\n", a);
	printf("*p = %d\n", *p);
	
	//由变量为常量赋值，常量变成了只读变量（通过指针可修改） 
	const int b = a;
	
	p = const_cast<int*>(&b);
	
	*p = 5;
	
	printf("b= %d\n", b);
	printf("*p = %d\n", *p);
	
	return 0;
}
