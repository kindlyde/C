#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Test{
private:
	static int i;

public:
	static int get_i()
	{
		return i;	
	}
	
	static void set_i(int j)
	{
		i = j;
	}
};

//在类外为静态变量分配内存空间 
int Test::i = 1;

int main(int argc, char *argv[]) {
	//直接用类名访问静态成员函数 
	Test::set_i(10);
	
	Test t1;
	//用定义的对象访问静态成员函数 
	t1.set_i(11);
	
	printf("get_i = %d\n", Test::get_i());
	
	return 0;
}






