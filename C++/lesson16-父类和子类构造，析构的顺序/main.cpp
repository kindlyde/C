#include <iostream>

using namespace std;

class Parent{
	protected:
		const char* name;
	public:
		Parent(const char* s)
		{
			cout<<"parent = "<<" "<<s<<endl;	
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
	public:
		Child() : Parent("the par of parent")
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
