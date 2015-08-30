#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;	
}

int main(int argc, char *argv[]) {
	
	int a = 1;
	int b = 2;
	
	printf("before swap a and b\n");
	printf("a = %d, b = %d\n", a, b);
	
	swap(&a, &b);
	
	printf("after swap a and b\n");
	printf("a = %d, b = %d\n", a, b);
	
	return 0;
}
