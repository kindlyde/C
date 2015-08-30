#include <iostream>

using namespace std;

class Test
{
private:
    int i;
public:
	//此explicit剥夺了t2 = 5初始化调用此构造函数做隐式转换的权利 
    explicit Test(int i)
    {
        cout<<"Test()"<<endl;
        this->i = i;
    }
    
    //此explicit剥夺了t3 = Test(5)初始化调用拷贝构造函数创建临时变量的权利 
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
