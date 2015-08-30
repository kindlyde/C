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
	
	//ָ��p���������󲢲���ָ����һ�������VPTR
	//(��Ϊ�麯��ָ������Ϊ����ĵ�һ�����ݳ�Ա�洢���ڴ��е�) 
	//	p->f();
	c->f();
	
	return 0;
}
