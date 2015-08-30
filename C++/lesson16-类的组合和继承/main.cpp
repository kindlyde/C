#include <iostream>

using namespace std;

class object{
	
	public:
		object(const char* o)
		{
			cout<<"object()"<<" "<<o<<endl;
		}
		~object()
		{
			cout<<"~object()"<<endl;	
		}
}; 


class Parent : public object
{
	protected:
		const char* name;
	public:
		//object(s)仅仅是此类构造时初始化其父类 
		Parent(const char* s):object(s)
		{
			cout<<"parent()"<<" "<<s<<endl;	
		}
		
		~Parent()
		{
			cout<<"~parent()"<<endl;	
		}
};

class Child : public Parent
{
	private: 
		int i;
		object o1;
		object o2;
	public:
		//使用初始化列表初始化类对象成员 
		Child() : Parent("the par from child"),o1("o1"),o2("o2")
		{
			cout<<"child()"<<endl;
		}
		
		~Child()
		{
			cout<<"~child()"<<endl;	
		}
	
};

void func()
{
	Child child;
}

int main(int argc, char *argv[]) {
	
	func();
	return 0;
}
