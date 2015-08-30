#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Complex{
	int x;
	int y;
}; 

Complex operator+(const Complex& a, const Complex& b)
{
	Complex ret;
	
	ret.x = a.x + b.x;
	ret.y = a.y + b.y;
	
	return ret;
}

int main(int argc, char *argv[]) {
	
	Complex c1{1, 2};
	Complex c2{3, 4};
	
	//Complex c3 = c2 + c1; //������+������ʱ�޷����нṹ�壨�ࣩ֮��ļӷ� 
	
	//Complex c3 = operator+(c2, c1);//ֱ�ӵ������ط��������мӷ� 
	
	Complex c3 = c1 + c2; //ʹ�õ������غ�ļӷ������ 
	
	cout<<"c3.x = "<< c3.x<<endl<<"c3.y = "<<c3.y<<endl;
	
	//cin.get();
	
	return 0;
}
