#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Parent
{
public:
	Parent()
	{
		print();//�ڹ����ڼ�����麯�� 
	}
	
	virtual void print()
	{
		cout<<"I'm parent"<<endl;	
	}			
};

class Child : public Parent{
public:
	virtual void print()
	{
		cout<<"I'm child"<<endl;	
	}
}; 

int main(int argc, char *argv[]) {
	
	/*��ʼ��childʱ���ȵ��ø���Ĺ��캯���Ը�����г�ʼ����VPTRָ������麯����
	֮���ʼ���������VPTRָ��������麯�������Կ����ڸ����ʼ��ʱ��
	�����VPTR��û�б���ʼ�����麯��ָ�뻹û����ʼ������Ȼ���ᷢ����̬*/
	Child child;
	
	return 0;
}

