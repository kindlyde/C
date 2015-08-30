#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;	
}

int& f()
{
	static int global_a = 0;
	
	return global_a;
} 

int& g()
{
	int local_a = 0;
	
	return local_a;
}

int main(int argc, char *argv[]) {
	
	/*三目运算符的升级*/
	int a = 3;
	int b = 2;
	
	(a < b ? a : b) = 2;
	
	printf("a =  %d, b = %d\n", a, b);
	
	/*引用的语法*/
	int c = 2;
	int& d = c;
	
	d = 3;
	printf("c = %d, d = %d\n", c, d);
	printf("&c  = %08x\n", &c);
	printf("&d  = %08x\n", &d);
	
	/*引用的交换函数*/
	printf("before swap a and b\n");
	printf("a = %d, b = %d\n", a, b);
	
	swap(a, b);
	
	printf("after swap a and b\n");
	printf("a = %d, b = %d\n", a, b);
	
	/*const常引用*/
	const int& e = 1;
	int *p = (int*)&e;
	
	*p = 5;
	
	printf("e = %d\n", e); 
	
	/*检查引用是否有存储空间*/
	struct ref{
		int& a;
	}; 
	
	printf("sizeof(ref) = %d\n", sizeof(ref));
	
	/*返回值为引用的函数*/
	int i = g();
	int& j = g();
	int& k = f();
	
	/*k值是f()的引用，同一地址的别名*/
	f() = 9;
	
	printf("local : i = %d\n", i);
	printf("glocal : j = %d\n", j);
	printf("the value returned : k = %d\n", k);
	printf("func : f() = %d ", f());

	return 0;
}
