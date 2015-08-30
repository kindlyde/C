#include <iostream>

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T>
void swap1(T& x, T& y)
{
	T t = x;
	x = y;
	y = t;
}

int main(int argc, char *argv[]) {
	
	int a = 1;
	int b = 2;
	
	//编译器自动进行类型推导 
	swap1(a, b);
	
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	float fa = 10.3;
	float fb = 12.2;
	
	//显式指定类型 
	swap1<float>(fa, fb);
	
	cout<<"fa = "<<fa<<endl;
	cout<<"fb = "<<fb<<endl;
	
	return 0;
}
