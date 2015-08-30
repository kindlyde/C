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
	
	//���ڸ��ࣨ�����ӿڣ�������add�����Ĺ���˵����ֻʵ��һ�����ɡ������˶����� 
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
	
	
	//��Ȼ��ѭ��ֵ������ ������ָ��ָ��֮����� 
	Interface1* i1 = &a;
	Interface2* i2 = &a;
	
	//ʹ�ò�ͬ�ĸ���ָ�����add���� 
	cout<<i1->add(1,2)<<endl;
	cout<<i2->add(2,1)<<endl;
	
	return 0;
}
