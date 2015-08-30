#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;	
}

int& f()
{
	static int global_a = 0;
	
	return global_a;
} 

int& g()
{
	int local_a = 0;
	
	return local_a;
}

int main(int argc, char *argv[]) {
	
	/*��Ŀ�����������*/
	int a = 3;
	int b = 2;
	
	(a < b ? a : b) = 2;
	
	printf("a =  %d, b = %d\n", a, b);
	
	/*���õ��﷨*/
	int c = 2;
	int& d = c;
	
	d = 3;
	printf("c = %d, d = %d\n", c, d);
	printf("&c  = %08x\n", &c);
	printf("&d  = %08x\n", &d);
	
	/*���õĽ�������*/
	printf("before swap a and b\n");
	printf("a = %d, b = %d\n", a, b);
	
	swap(a, b);
	
	printf("after swap a and b\n");
	printf("a = %d, b = %d\n", a, b);
	
	/*const������*/
	const int& e = 1;
	int *p = (int*)&e;
	
	*p = 5;
	
	printf("e = %d\n", e); 
	
	/*��������Ƿ��д洢�ռ�*/
	struct ref{
		int& a;
	}; 
	
	printf("sizeof(ref) = %d\n", sizeof(ref));
	
	/*����ֵΪ���õĺ���*/
	int i = g();
	int& j = g();
	int& k = f();
	
	/*kֵ��f()�����ã�ͬһ��ַ�ı���*/
	f() = 9;
	
	printf("local : i = %d\n", i);
	printf("glocal : j = %d\n", j);
	printf("the value returned : k = %d\n", k);
	printf("func : f() = %d ", f());

	return 0;
}
