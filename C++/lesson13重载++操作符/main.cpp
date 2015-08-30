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
//将重载操作符定义为类的成员函数，只接受一个形参（右操作数）即可，this指针指向左操作数 
	Complex& operator+(const Complex& a)
	{
		Complex ret;
		
		ret.x = this->x + a.x;
		ret.y = this->y + a.y;
		
		return ret;
	}	
	
	Complex operator++(int);//后置运算 
	Complex& operator++();//前置运算 
	friend ostream& operator<<(ostream& out, Complex& a); 
}; 

ostream& operator<<(ostream& out, Complex& a)
{
	out<<a.x<<"+"<<a.y<<"i"<<endl;
	
	return out;
}

Complex Complex::operator++(int)
{
	Complex ret = *this; //先使用拷贝构造函数将操作对象返回，因此相对于前置++运算，效率较低 
	
	x++;
	y++;
	
	return ret;
}

Complex& Complex::operator++()
{
	x++;
	y++; 
	
	return *this;	
} 

int main(int argc, char *argv[]) {
	
	Complex c1(1, 2);
	Complex c2(3, 4);
	
	Complex c3 = c2; 
	
	++c2;
	c3++;
	
	//虽然c2和c3结果一致，但是它们使用了不同的重载运算符，运行效率是不一样的。 
	cout<<c2<<c3<<endl;
	
	//cout<<"c3.x = "<< c3.get_x()<<endl<<"c3.y = "<<c3.get_y()<<endl;
	
	//cin.get();
	
	return 0;
}


