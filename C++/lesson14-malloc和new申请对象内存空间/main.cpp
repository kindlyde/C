#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Test{
private:
	int i;
public:
	Test()
	{
		i = 0;
		cout<<"test()"<<endl;	
	}
	
	~Test()
	{
		cout<<"~test()"<<endl; 
	}
	
	int get_i()
	{
		 return i;	
	}
}; 

void func()
{
	Test* op = reinterpret_cast<Test*>(malloc(sizeof(Test)));
	Test* oq = new Test;
	
	cout<<op->get_i()<<" "<<oq->get_i()<<endl; 
	
	free(op);
	//free(oq);
	delete oq;
}

int main(int argc, char *argv[]) {
	
	func();
	
	return 0;
}
