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


//���캯���ĵ���˳��1>2>3 
void func(Test t)
{
	//3.�����β�Ϊ���͵Ĺ��캯�� 
    Test r(1);
}

void run()
{
    Test t(0);//1.�����β�Ϊ���͵Ĺ��캯�� 
    
    //2.�����β�Ϊ���ö���Ĺ��캯�����Զ���t���βν��г�ʼ�� 
    func(t);
}
//���������ĵ���˳��3>2>1	 
int main()
{
    run();

    return 0;
}

