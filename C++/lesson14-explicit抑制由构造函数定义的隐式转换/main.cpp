#include <iostream>

using namespace std;

class Test
{
private:
    int i;
public:
	//��explicit������t2 = 5��ʼ�����ô˹��캯������ʽת����Ȩ�� 
    explicit Test(int i)
    {
        cout<<"Test()"<<endl;
        this->i = i;
    }
    
    //��explicit������t3 = Test(5)��ʼ�����ÿ������캯��������ʱ������Ȩ�� 
    explicit Test(const Test& obj)
    {
        cout<<"Test(const Test& obj)"<<endl;
    }
    
    ~Test()
    {
        cout<<"~Test"<<endl;
    }
    
    int getI()
    {
        return i;
    }
};


int main(int argc, char *argv[]) {

	Test t1(5);
	//Test t2 = 5;
	//Test t3 = Test(5);
	
	return 0;
}
