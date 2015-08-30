#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Interface1{
public:
	virtual void print() = 0;
	virtual int add(int i, int j) = 0;
}; 

struct Interface2{
	virtual int add(int i, int j) = 0;
	virtual int minus(int i, int j) = 0;
};

class Child : public Interface1, public Interface2{
public:
	void print()
	{
		cout<<"print"<<endl;	
	}
	
	//对于父类（两个接口）中两个add函数的功能说明，只实现一个即可。避免了二义性 
	int add(int i, int j)
	{
		return i + j;	
	}
	
	int minus(int i, int j)
	{
		return i - j;	
	}
};

int main(int argc, char *argv[]) {
	
	Child a;
	
	a.print();
	
	cout<<a.add(1,2)<<endl;
	cout<<a.minus(2,1)<<endl;
	
	
	//依然遵循赋值兼容性 ，父类指针指向之类对象 
	Interface1* i1 = &a;
	Interface2* i2 = &a;
	
	//使用不同的父类指针调用add函数 
	cout<<i1->add(1,2)<<endl;
	cout<<i2->add(2,1)<<endl;
	
	return 0;
}
