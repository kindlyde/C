#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct student {
	
	char* name;
	int age;
}student;

f(i)
{
    printf("i = %d\n",  i);
}
g()
{
    return 1;
}

int main(int argc, char *argv[]) {
	
	student a = {"xiaoming", 19};
	//student b = {"xiaohong", 20};
	
	f(10);
	
	printf("g() =  %d", g());
	
	return 0;
}
