#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Test{
private:
	static int i;

public:
	static int get_i()
	{
		return i;	
	}
	
	static void set_i(int j)
	{
		i = j;
	}
};

//������Ϊ��̬���������ڴ�ռ� 
int Test::i = 1;

int main(int argc, char *argv[]) {
	//ֱ�����������ʾ�̬��Ա���� 
	Test::set_i(10);
	
	Test t1;
	//�ö���Ķ�����ʾ�̬��Ա���� 
	t1.set_i(11);
	
	printf("get_i = %d\n", Test::get_i());
	
	return 0;
}






