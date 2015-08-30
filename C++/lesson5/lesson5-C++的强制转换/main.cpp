#include <iostream>
#include <stdio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i = 0x1234;
	char c = 'c';
	
	//int* pi = &i;
	//char* pc = &c;
	
	c = static_cast<char>(i);
	
	/*不可进行指针类型之间的转换*/
	//pc = static_cast<char*>(pi);
	
	
	/*const_cast去除变量的const属性的强制转换*/	
	const int& ii = 1;
    int& k = const_cast<int&>(ii); //去除常引用的只读属性
	 
	const int j = 2;
	int& h = const_cast<int&>(j);//去除常量的不可修改属性
	 
	k = 5;
	 
	printf("ii = %d\n", ii);
	printf("k = %d\n", k);
	 
	h = 9; 
	
	printf("j = %d\n", j);
	printf("h = %d\n", h);
	printf("&j = %p\n", &j);
	printf("&h = %p\n", &h);
	
	
	/*reinterpret_cast强制转换*/
	int x = 0;
	char y = 'c';
	
	int* pi = reinterpret_cast<int*>(&y);
	char* pc = reinterpret_cast<char*>(&x); 
	pc = reinterpret_cast<char*>(pi); 
	pi = reinterpret_cast<int*>(0x12345);
	
	/*不能进行基本类型之间的强制转换*/
	//y = reinterpret_cast<char>(x);
	
	return 0;
}
