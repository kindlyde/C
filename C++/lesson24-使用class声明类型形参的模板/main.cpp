#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
template <class T, int N>
class Test{
	public:
		typedef T ele_type;
		enum { LEN = N };
		
	ele_type array[N];
};

int main(int argc, char *argv[]) {
	Test<int, 5> t1;
	Test<float, 3> t2;
	
	
	return 0;
}
