#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class single_ton{
	
private:
	static single_ton* cintance;
	
	//将构造函数定义为私有成员，这样则不能被外界所调用 
	single_ton()
	{
		
	}
	
public:
	//采用静态函数只申请一次新对象 
	static single_ton* get_single()
	{
		if(cintance == NULL)
		{
			cout<<"new single_ton()"<<endl;
			cintance = new single_ton();	
		}	
		
		return cintance;
	}
	
	void print()
	{
		cout<<"i'm get_single()"<<endl;	
	}
}; 

single_ton* single_ton::cintance = NULL;

void func()
{
	//创建3个对象指针 
	single_ton*	s = single_ton::get_single();
	single_ton*	s1 = single_ton::get_single();
	single_ton*	s2 = single_ton::get_single();
	
	
	//查看指向申请的类对象的指针地址 
	cout<<s<<" "<<s1<<" "<<s2<<endl;
	
	s->print();
} 

int main(int argc, char *argv[]) {
	 
	func();
	
	return 0;
}
