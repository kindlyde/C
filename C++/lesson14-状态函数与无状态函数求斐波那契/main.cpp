#include <iostream>

using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fib1(int i)
{
	int a1 = 0;
	int a2 = 1;
	
	int ret = a2;
	
	while(i >= 1)
	{
		ret = a2 + a1;
		a1 = a2;
		a2 = ret;
		i--;	
	}
	
	return ret;
}

int fib2()
{
	static int a1 = 0;
	static int a2 = 1;
	
	int ret = a2;
	
	a2 = a1 + a2;
	a1 = ret;
	
	return ret;
}


int main(int argc, char *argv[]) {
	
	for(int i = 0; i<10; i++)
	{
		cout<<fib1(i)<<endl;	
	}
	
	for(int i = 0; i<10; i++)
	{
		cout<<fib2()<<endl;	
	}
	
	return 0;
}
