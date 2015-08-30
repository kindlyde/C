#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Complex{
private:
	int x;
	int y;
	
public:
	Complex(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;	
	}
	
	int get_x()
	{
		return x;	
	}
	
	int get_y()
	{
		return y;
	}
//方法一：将重载操作符定义为类的成员函数，只接受一个形参（右操作数）即可，this指针指向左操作数 
	Complex& operator+(const Complex& a)
	{
		Complex ret;
		
		ret.x = this->x + a.x;
		ret.y = this->y + a.y;
		
		return ret;
	}	

//方法二：将重载操作符定义为类的友元 
//friend Complex operator+(const Complex& a, const Complex& b);	
	
}; 

/*Complex operator+(const Complex& a, const Complex& b)
{
	Complex ret;
	
	ret.x = a.x + b.x;
	ret.y = a.y + b.y;
	
	return ret;
}*/

int main(int argc, char *argv[]) {
	
	Complex c1(1, 2);
	Complex c2(3, 4);
	
	Complex c3 = c1 + c2; 
	
	cout<<"c3.x = "<< c3.get_x()<<endl<<"c3.y = "<<c3.get_y()<<endl;
	
	//cin.get();
	
	return 0;
}

