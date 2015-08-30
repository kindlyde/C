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
//�����ز���������Ϊ��ĳ�Ա������ֻ����һ���βΣ��Ҳ����������ɣ�thisָ��ָ��������� 
	Complex& operator+(const Complex& a)
	{
		Complex ret;
		
		ret.x = this->x + a.x;
		ret.y = this->y + a.y;
		
		return ret;
	}	
	
	Complex operator++(int);//�������� 
	Complex& operator++();//ǰ������ 
	friend ostream& operator<<(ostream& out, Complex& a); 
}; 

ostream& operator<<(ostream& out, Complex& a)
{
	out<<a.x<<"+"<<a.y<<"i"<<endl;
	
	return out;
}

Complex Complex::operator++(int)
{
	Complex ret = *this; //��ʹ�ÿ������캯�����������󷵻أ���������ǰ��++���㣬Ч�ʽϵ� 
	
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
	
	//��Ȼc2��c3���һ�£���������ʹ���˲�ͬ�����������������Ч���ǲ�һ���ġ� 
	cout<<c2<<c3<<endl;
	
	//cout<<"c3.x = "<< c3.get_x()<<endl<<"c3.y = "<<c3.get_y()<<endl;
	
	//cin.get();
	
	return 0;
}


