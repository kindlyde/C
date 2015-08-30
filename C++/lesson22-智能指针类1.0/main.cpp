#include <iostream>
#include "smart_pointer.hpp"

using namespace std;

class Test{
public:
	int i;
	void print()
	{
		cout<<i<<endl;	
	}
	
};

int main(int argc, char *argv[]) {
	
	smart_pointer<float> pf(new float(5.1));//更直观，调用构造函数初始化 
	smart_pointer<int> pi = new int(5);//更符合指针使用方法 
	
	cout<<*pf<<endl; 
	cout<<*pi<<endl; 
	
	smart_pointer<Test> pt = new Test();
	pt->i = 10;
	pt->print();
	
	return 0;
}
