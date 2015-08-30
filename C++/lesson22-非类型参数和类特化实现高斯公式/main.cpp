#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//具有非类型参数类模板:元函数：编译期间可以使用的函数 
template <int N>
class sum{
public:
	static const int Value = sum<N-1>::Value + N;
};

//具有非类型参数类模板的递归调用依赖于模板的特化 
template <>
class sum<1>{
public:
	static const int Value = 1;
};


int main(int argc, char *argv[]) {
	
	//在第二次编译时，即实例化的时候已经计算出了，所以运行时耗费的时间也就是取出一个变量值的时间 
	cout<<sum<100>::Value<<endl;
	 
	return 0;
}
