#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class single_ton{
	
private:
	static single_ton* cintance;
	
	//�����캯������Ϊ˽�г�Ա���������ܱ���������� 
	single_ton()
	{
		
	}
	
public:
	//���þ�̬����ֻ����һ���¶��� 
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
	//����3������ָ�� 
	single_ton*	s = single_ton::get_single();
	single_ton*	s1 = single_ton::get_single();
	single_ton*	s2 = single_ton::get_single();
	
	
	//�鿴ָ�������������ָ���ַ 
	cout<<s<<" "<<s1<<" "<<s2<<endl;
	
	s->print();
} 

int main(int argc, char *argv[]) {
	 
	func();
	
	return 0;
}
