#include <iostream>

using namespace std;

class Parent{
	protected:
		const char* name;
	public:
		Parent()
		{
			name = "parent";	
		}
		
	void print()
	{
		cout<<"Name: "<<name<<endl;	
	}
};

class Child : public Parent
{
	private: 
		int i;
	public:
		Child(int i)
		{
			this->name = "child";
			this->i = i;
		}
		
		void print()
		{
			cout<<"Name: "<<name<<endl;	
		}
	
};

int main(int argc, char *argv[]) {
	
	Child child(100);
	Parent p = child;//使用子类对象对父类对象进行初始化 
	Parent* pp = &child;//父类指针指向子类对象 
	Parent& rp = child;//父类对象指向子类引用 
	
	p.print();
	pp->print();
	rp.print(); 
	
	return 0;
}
