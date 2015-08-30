#include <stdio.h>

/*extern关键字声明下面被包括的代码用C编译方式编译，C应大写*/
extern "C"
{
#include "add.h"
}

int main()
{
	int a = 1;
	int b = 1;
	
	printf("1 + 1 = %d\n", add(a, b));
}


