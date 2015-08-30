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
	
	/*虽然对所有异常进行了统一的处理，还是要将不同的异常区分开来，以有利于以后的维护 
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
		/*对除去字符异常外的所有异常进行捕获，只能放在异常处理块的最后位置*/ 
		catch(...)
		{
			cout<<"excaption: "<<endl;	
		}

	}
	return 0;
}
