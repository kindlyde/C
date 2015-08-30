#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class test{
	int i;
	int j;
	static int k;
	
public:
	test(int i, int j)
	{
		this->i = i;
		this->j = j;	
	}
	
	void print()
	{
		printf("object test t1 address %p\n", this);
		printf("&i : %p, i = %d\n", &i, i);
		printf("&j : %p, j = %d\n", &j, j);
		printf("static &k : %p, k = %d\n", &k, k);	
	}
	
	/*演示静态成员函数不具有this指针*/
	static void print_1()
	{
	//	printf("object test t1 address %p\n", this);
	}
}; 

int test::k;

int main(int argc, char *argv[]) {

	test t1(1, 2);
	
	printf("object t1 address: %p\n", &t1);
	 
	t1.print();
	
	return 0;
}
