#include <iostream>
#include <stdio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

namespace first{
	int i = 0;
}; 

namespace second{
	int i = 1;
	namespace internal{
		struct P{
			int a;
			int b;
		};
	};
};

int main(int argc, char *argv[]) {
	
	using namespace first; //ʹ��first�����ռ� 
	using namespace second::internal; //ʹ��Ƕ����second�е������ռ� 
	
	printf("i = %d\n", i);
	
	P struct_p = {3, 4};
	
	printf("struct_p.a = %d\n", struct_p.a);
	printf("struct_p.b = %d\n", struct_p.b);
	
	int* p = new int;
	
	*p = 5;
	
	printf("*p = %d\n", *p);
	
	delete p;
	
	/*��̬��������ֱ�ӳ�ʼ��*/
	int *pi = new int(102); 
	
	printf("*pi = %d\n", *pi);
	
	delete pi;
	
	/*��̬��������ռ�*/
	 p = new int[10]; 
	
	for(int i=0; i<5; i++)
	{
		p[i] = i ;
		printf("new array p[%d] = %d\n", i, p[i]);	
	}
	
	delete[] p;
	
	return 0;

}
