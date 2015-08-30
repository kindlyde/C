#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	
	return a;
} 


int main(int argc, char *argv[]) {

	for(int i=0; i < 6; i++)
	{
		try
		{
			cout<<test(i)<<endl;	
		}
		//char型的异常并不会被捕捉到，这里不同于函数参数，不能进行类型的隐式转换 
		catch(int e)
		{
			cout<<"int :"<<e<<endl;	
		}
		catch(double e)
		{
			cout<<"double :"<<e<<endl;	
		}
		catch(const char* e)
		{
			cout<<"const char* :"<<e<<endl;	
		}
		catch(char e)
		{
			cout<<"char :"<<e<<endl;	
		}

	}
	return 0;
}
