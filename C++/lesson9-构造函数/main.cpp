#include <stdio.h> 
#include "array.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Array a1(10);
	//Array a1;
	//a1.Array(10);
	
	
	//可以重载[]操作符，使对象a1的操作更像数组 
	for(int i=0; i<a1.length(); i++)
	{
		a1.set_data(i , i);	
	}
	
	for(int i=0; i<a1.length(); i++)
	{
		printf("ele %d :%d \n", i, a1.get_data(i));	
	}
	
	/*使用默认的拷贝构造函数对a2对象赋值，
	指向动态申请数组空间的指针m_space也进行了拷贝
	因此，两个数组类指向了同一个地址空间，
	所以下面的释放函数对同一地址空间进行了两次释放
	因而需要定义不同的拷贝构造函数来完成对数组空间值的复制*/ 
	Array a2 = a1;
	
	for(int i=0; i<a2.length(); i++)
	{
		printf("ele2 %d :%d \n", i, a2.get_data(i));	
	}
	
	a1.destroy();
	a2.destroy();
	return 0;
}
