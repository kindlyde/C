#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class M{
private:
	int y;
	
public: 
	M(int x)
	{
		y = x;	
		printf("y = %d\n", y);
	}
}; 

class A{	
private: 
	const int i; //�޷�Ϊ˽�����ݳ�Ա��ֵ
	M m; //����������ʽ��ʹ�ø����Ĭ�Ϲ��캯�������������ڸ������Ѷ����˹��캯������Ĭ�ϣ� �������Ҳ���Ĭ�Ϲ��캯�� ����ʧ�� 
	
public:
   A():i(1),m(10)
    {
	//	M m(10);
    //	i = 0;//���룺iΪֻ��������ֻ���ڳ�ʼ���б����޸� 
        printf("const A.i = %d\n", i);

    }	
}; 
int main(int argc, char *argv[]) {
	A a;
	
	return 0;
}
