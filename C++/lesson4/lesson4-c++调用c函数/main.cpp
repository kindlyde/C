#include <stdio.h>

/*extern�ؼ����������汻�����Ĵ�����C���뷽ʽ���룬CӦ��д*/
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


