#include <iostream>
#include <cstdlib>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double Div(double a, double b, bool* valid)
{
	*valid = true;
	
	if((-0.00000001 < b) && (b < 0.00000001))
	{
		*valid = false;
		return 0;	
	}
	return a / b;
}

double Minus(double a, double b)
{
	return a - b;
}

double Add(double a, double b)
{
	return a + b;
}

int main(int argc, char *argv[]) {
	
	bool* p = NULL;//假设引入的bool参数不合法 
	cout<<Div(Add(1, 2), Minus(3, 3), p)<<endl;
	
	return 0;
}
