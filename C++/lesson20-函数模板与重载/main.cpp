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
	
	//函数模板实例化出现二义性，优先选择普通函数 
	if( !compare(p1, p2) )
	{
		cout<<"call the ordinary function"<<endl;	
	}
	
	//验证当使用函数模板有更好的匹配时 ，使用函数模板 
	if(compare(p4, p5))
	{
		cout<<"call compare(const T& , const T&)"<<endl;
	}
	
	//使用空白的模板实参列表，来指定使用函数模板来进行匹配 
	if( compare<>(p1, p2) )
	{
		cout<<"call compare(const T& , const T&)"<<endl;
	}
	
	//验证普通函数可以自动进行类型转换  
	if( !compare(p1, &c3) )
	{
		cout<<"call the ordinary function"<<endl;	
	}
	
	return 0;
}
