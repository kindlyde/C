#include <iostream>
using namespace std;

int test(int a)
{
	if(a == 1)
	{
		throw -1;	
	}
	else if(a == 2)
	{
		throw 0.1;
	}
	else if(a == 3)
	{
		throw "error";	
	}
	else if(a == 4)
	{
		throw 'a';	
	}
	
	/*��Ȼ�������쳣������ͳһ�Ĵ�������Ҫ����ͬ���쳣���ֿ��������������Ժ��ά�� 
	if((a <= 1) && (a < 4))
	{
		throw 	
	}
	*/
	
	return a;
} 

int main(int argc, char *argv[]) {

	for(int i=0; i < 6; i++)
	{
		try
		{
			cout<<test(i)<<endl;	
		}
		catch(char e)
		{
			cout<<"char :"<<e<<endl;	
		}
		/*�Գ�ȥ�ַ��쳣��������쳣���в���ֻ�ܷ����쳣���������λ��*/ 
		catch(...)
		{
			cout<<"excaption: "<<endl;	
		}

	}
	return 0;
}
