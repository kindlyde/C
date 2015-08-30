#include <iostream>
#include <string>
using namespace std;
 
#define NOT_EQUAL -1
 
int compare_s(string s1, string s2)
{
	int ret = 0;
	
	if(s1 == s2)
	{
		ret = 1;
	}	
	else
	{
		throw(NOT_EQUAL);
	}
}

int main(int argc, char *argv[]) {
	
	string sa("123");
	string sb("456");
	
	try
	{
		cout<<compare_s(sa, sb)<<endl;	
	}
	catch(int err)
	{
		cout<<"they are different!"<<endl;
		cout<<err<<endl;		
	}	
	
	return 0;
}
