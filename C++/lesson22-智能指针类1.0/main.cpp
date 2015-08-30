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
	
	smart_pointer<float> pf(new float(5.1));//��ֱ�ۣ����ù��캯����ʼ�� 
	smart_pointer<int> pi = new int(5);//������ָ��ʹ�÷��� 
	
	cout<<*pf<<endl; 
	cout<<*pi<<endl; 
	
	smart_pointer<Test> pt = new Test();
	pt->i = 10;
	pt->print();
	
	return 0;
}
