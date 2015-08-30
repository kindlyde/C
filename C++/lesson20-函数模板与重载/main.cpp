#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T> 
int compare(const T& , const T&)
{
	return 1;
}

int compare(const char* , const char*)
{
	return 0;
}

int main(int argc, char *argv[]) {
	
	const char *p1 = "asd";
	const char *p2 = "bsd";
	char c3 = 'a';
	char *p4 = "csd";
	char *p5 = "dsd";
	
	//����ģ��ʵ�������ֶ����ԣ�����ѡ����ͨ���� 
	if( !compare(p1, p2) )
	{
		cout<<"call the ordinary function"<<endl;	
	}
	
	//��֤��ʹ�ú���ģ���и��õ�ƥ��ʱ ��ʹ�ú���ģ�� 
	if(compare(p4, p5))
	{
		cout<<"call compare(const T& , const T&)"<<endl;
	}
	
	//ʹ�ÿհ׵�ģ��ʵ���б���ָ��ʹ�ú���ģ��������ƥ�� 
	if( compare<>(p1, p2) )
	{
		cout<<"call compare(const T& , const T&)"<<endl;
	}
	
	//��֤��ͨ���������Զ���������ת��  
	if( !compare(p1, &c3) )
	{
		cout<<"call the ordinary function"<<endl;	
	}
	
	return 0;
}
