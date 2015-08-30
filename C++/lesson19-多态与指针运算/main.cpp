#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Parent{
protected:
	int i;
public:
	virtual void f()
	{
		cout<<"Parent::f()"<<endl;	
	}
}; 

class Child : public Parent{
private: 
	int j;
public:
	Child(int i, int j)
	{
		this->i = i;
		this->j = j;
	}
	void f()
	{
		cout<<"i = "<<i<<"\t"<<"j = "<<j<<endl;	
	}
};

int main(int argc, char *argv[]) {
	
	Parent *p = NULL;
	Child *c = NULL;
	
	Child ca[3] = {{1, 2}, {3, 4}, {5, 6}};
	
	p = ca;
	c = ca;
	
	p->f();
	c->f();
	
	p++;
	c++;
	
	//指针p经过自增后并不是指向下一个对象的VPTR
	//(因为虚函数指针是作为对象的第一个数据成员存储在内存中的) 
	//	p->f();
	c->f();
	
	return 0;
}
