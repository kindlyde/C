#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
template <typename T>
class opertor{
private:
	T a;
	T b;
public:
	T add(T a, T b)
	{
		return a + b;	
	}
	
	T minus(T a, T b)
	{
		return a - b; 	
	}
};

int main(int argc, char *argv[]) {
	
	opertor<int> op1;
	
	cout<<op1.add(3, 12)<<endl;
	cout<<op1.minus(3, 12)<<endl;
	
	opertor<float> op2;
	
	cout<<op2.add(3.8, 12)<<endl;
	cout<<op2.minus(3, 2.9)<<endl;
	
	return 0;
}
