#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//volatile ÿ�ζ����ڴ���ȡֵ���ı��˷��ʳ���aÿ��Ҫ�����ű���ȡֵ�ķ�ʽ 
	volatile const int a = 1;
	
	int* p = NULL;
	
	p = const_cast<int*>(&a);
	
	*p = 3;
	
	printf("a = %d\n", a);
	printf("*p = %d\n", *p);
	
	//�ɱ���Ϊ������ֵ�����������ֻ��������ͨ��ָ����޸ģ� 
	const int b = a;
	
	p = const_cast<int*>(&b);
	
	*p = 5;
	
	printf("b= %d\n", b);
	printf("*p = %d\n", *p);
	
	return 0;
}
