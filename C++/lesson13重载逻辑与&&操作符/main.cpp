#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class test{
	private:
		int i;
	public:
		test(int i = 0)
		{
			this->i = i;	
		}
		
		test operator+(const test& obj)
		{
			test ret;
			
			cout<<"test operator+(const test& obj)" <<endl;
			ret.i = i + obj.i;
			
			return ret;	
		}
		
		bool operator&&(const test& obj)
		{
			bool ret;
			
			cout<<"bool operator&&(const test& obj)"<<endl;
			ret = i && obj.i;
			
			return ret;	
		}
		
		int get_i()
		{
			cout<<"i = "<<i<<endl;	
		}
}; 


int main(int argc, char *argv[]) {
	
	test t1 = 0;
	test t2 = 1;

	t2 .get_i();
	
	//t1.operator&&(t1.operator+(t2));等价于if中的条件表达式，因为会先对函数的参数进行计算，所以无法进行短路规则。 
	if(t1 && (t1 + t2))
	{
		cout<<"hello"<<endl;	
	}

	return 0;
}
