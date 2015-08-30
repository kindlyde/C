#include <iostream>

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T>
class Test{
	
public:
	T test(T v)
	{
		cout<<"T test(T v)"<<endl;
		cout<<"sizeof(T) = "<<sizeof(T)<<endl;
		
		return v;	
	}
	
};

//特化类 
template<>
class Test<int>
{
public:
	int test(int v)
	{ 
		cout<<"int test(int v)"<<endl;
		cout<<"sizeof(int) = "<<sizeof(int)<<endl;	
		
		return v;
	} 
};


int main(int argc, char *argv[]) {
	
	Test<int> t1;//直接使用特化类 
	
	cout<<t1.test(1)<<endl;

	return 0;
}
