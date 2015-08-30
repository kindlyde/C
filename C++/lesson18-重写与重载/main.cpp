#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Parent{
	
public:
	virtual void func()
	{
		cout<<"void func()"<<endl;
	}
	virtual void func(int i)
	{
		cout<<"void func(int i)"<<endl;	
	}
	virtual void func(int i, int j)
	{
		cout<<"void func(int i, int j)"<<endl;	
	}
}; 

class Child : public Parent{
	
public:
	void func(int i, int j)
	{
		cout<<"void func(int i, int j)"<<" "<<i+j<<endl;	
	}
	void func(int i, int j, int k)
	{
		cout<<"void func(int j, int j, int k)"<<" "<<i+j+k<<endl;
	}
	
};

void run(Parent* p)
{
	p->func(1,2);
}

int main(int argc, char *argv[]) {

	Parent p1;
	Parent* p = &p1; 
	Child c;
	
	//p.func(1, 2);
	run(p);
	run(&c);

	return 0;
}
