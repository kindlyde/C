#include <iostream>
#include "array.hpp"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Array<int> ai(8);
	
	ai[3] = 1;
	
	cout<<ai[3]<<endl;
	
	return 0;
}
