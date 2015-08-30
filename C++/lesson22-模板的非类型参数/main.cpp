#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T, int N>
void func(T (&array)[N])
{
	for(int i=0; i!=N; i++)
	{
		cout<<array[i]<<endl;	
	}
}

int main(int argc, char *argv[]) {
	
	int a[] = {1, 2, 3, 4, 5};
	
	func(a);
	
	return 0;
}
