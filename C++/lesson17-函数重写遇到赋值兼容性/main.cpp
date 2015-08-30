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

void func()
{
	Child child;
	Parent parent;
	
	//Child* pp = &parent;
	//Child& rp = &parent;
	
	Parent* pp = &child;
	Parent& rp = child;
	
	pp->print();//i'm parent 
	rp.print();//i'm parent
} 

int main(int argc, char *argv[]) {
	
	func();

	return 0;
}

