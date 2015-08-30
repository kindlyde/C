#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class shape{
public:
	virtual double area() = 0;
};

class retcangle : public shape
{
private:
	double ma;
	double mb;
public:
	retcangle(double a, double b)
	{	
		ma = a;
		mb = b;
	}
	
	double area()
	{
		return ma * mb;	
	} 
};

void area(shape* s)
{
	cout<<s->area()<<endl; 
}

int main(int argc, char *argv[]) {
	//shape s;
	retcangle r(3, 4);
	
	area(&r);
	
	return 0;
}
