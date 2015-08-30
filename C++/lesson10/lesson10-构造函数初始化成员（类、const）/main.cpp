#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class M{
private:
	int y;
	
public: 
	M(int x)
	{
		y = x;	
		printf("y = %d\n", y);
	}
}; 

class A{	
private: 
	const int i; //无法为私有数据成员赋值
	M m; //编译器会隐式地使用该类的默认构造函数，但是由于在该类中已定义了构造函数（非默认） ，所以找不到默认构造函数 ，则失败 
	
public:
   A():i(1),m(10)
    {
	//	M m(10);
    //	i = 0;//编译：i为只读变量，只能在初始化列表中修改 
        printf("const A.i = %d\n", i);

    }	
}; 
int main(int argc, char *argv[]) {
	A a;
	
	return 0;
}
