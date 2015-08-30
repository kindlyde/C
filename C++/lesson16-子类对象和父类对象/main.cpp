#include <iostream>

using namespace std;

class Parent{
	protected:
		const char* name;
	public:
		Parent()
		{
			name = "parent";	
		}
		
	void print()
	{
		cout<<"Name: "<<name<<endl;	
	}
};

class Child : public Parent
{
	private: 
		int i;
	public:
		Child(int i)
		{
			this->name = "child";
			this->i = i;
		}
		
		void print()
		{
			cout<<"Name: "<<name<<endl;	
		}
	
};

int main(int argc, char *argv[]) {
	
	Child child(100);
	Parent p = child;//ʹ���������Ը��������г�ʼ�� 
	Parent* pp = &child;//����ָ��ָ��������� 
	Parent& rp = child;//�������ָ���������� 
	
	p.print();
	pp->print();
	rp.print(); 
	
	return 0;
}
