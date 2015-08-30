#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Parent
{
public:
	Parent()
	{
		print();//在构造期间调用虚函数 
	}
	
	virtual void print()
	{
		cout<<"I'm parent"<<endl;	
	}			
};

class Child : public Parent{
public:
	virtual void print()
	{
		cout<<"I'm child"<<endl;	
	}
}; 

int main(int argc, char *argv[]) {
	
	/*初始化child时，先调用父类的构造函数对父类进行初始化，VPTR指向父类的虚函数表
	之后初始化子类对象，VPTR指向子类的虚函数表。可以看出在父类初始化时，
	子类的VPTR还没有被初始化，虚函数指针还没被初始化，当然不会发生多态*/
	Child child;
	
	return 0;
}

