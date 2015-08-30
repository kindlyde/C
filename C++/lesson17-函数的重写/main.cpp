#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Parent
{
public:
	void print()
	{
		cout<<"I'm parent"<<endl;	
	}			
};

class Child : public Parent{
public:
	void print()
	{
		cout<<"I'm child"<<endl;	
	}
}; 

int main(int argc, char *argv[]) {
	
	Child child;
	
	child.print();
	//优先级等价于child.( Parent::print() ) 
	child.Parent::print();
	//Parent::print();
	
	return 0;
}
