#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	
	char* name;
	int age;
};
int f(int i)
{
  printf("i = %d\n",  i);
}
int g(void)
{
	return 1;
}


int main(int argc, char *argv[]) {
	
	student a = {"xiaoming", 19};
	student b = {"xiaohong", 20};
	
	const int c = 0;
	
	int* p = (int*)&c;
	
	*p = 5;
	
	f(10);
		
	printf("c = %d\n", c);
	
	return 0;
}
