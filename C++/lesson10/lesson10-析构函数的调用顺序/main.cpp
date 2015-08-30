#include <stdio.h>

class Test
{
private:
    int mI;
public:
    Test()
    {
        printf("Test()\n");
        mI = -1;
    }
    
    Test(int i)
    {
        printf("Test(int i), i = %d\n", i);
        mI = i;
    }
    
    Test(const Test& obj)
    {
        printf("Test(const Test& obj), i = %d\n", obj.mI);
        mI = obj.mI;
    }
    
    ~Test()
    {
        printf("~Test(), i = %d\n", mI);
    }
};


//构造函数的调用顺序：1>2>3 
void func(Test t)
{
	//3.调用形参为整型的构造函数 
    Test r(1);
}

void run()
{
    Test t(0);//1.调用形参为整型的构造函数 
    
    //2.调用形参为引用对象的构造函数，以对象t对形参进行初始化 
    func(t);
}
//析构函数的调用顺序：3>2>1	 
int main()
{
    run();

    return 0;
}

