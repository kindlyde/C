#include <stdio.h> 
#include "array.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Array a1(10);
	//Array a1;
	//a1.Array(10);
	
	
	//��������[]��������ʹ����a1�Ĳ����������� 
	for(int i=0; i<a1.length(); i++)
	{
		a1.set_data(i , i);	
	}
	
	for(int i=0; i<a1.length(); i++)
	{
		printf("ele %d :%d \n", i, a1.get_data(i));	
	}
	
	/*ʹ��Ĭ�ϵĿ������캯����a2����ֵ��
	ָ��̬��������ռ��ָ��m_spaceҲ�����˿���
	��ˣ�����������ָ����ͬһ����ַ�ռ䣬
	����������ͷź�����ͬһ��ַ�ռ�����������ͷ�
	�����Ҫ���岻ͬ�Ŀ������캯������ɶ�����ռ�ֵ�ĸ���*/ 
	Array a2 = a1;
	
	for(int i=0; i<a2.length(); i++)
	{
		printf("ele2 %d :%d \n", i, a2.get_data(i));	
	}
	
	a1.destroy();
	a2.destroy();
	return 0;
}
