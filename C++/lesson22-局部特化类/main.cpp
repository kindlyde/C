#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T1, typename T2>
class Test
{
public:
	void add(T1 a, T2 b)
	{
		cout<<(a + b)<<endl;	
	}
};

/*
//����������ģ�����ͬ���Ͳ������ػ���
template <typename T>
class Test<T, T> 
{
public:
	void add(T a, T b)
	{
		cout<<"add(T a, T b)"<<endl;
		cout<<static_cast<int>(a + b)<<endl;	
	}
};*/

template <typename T>
class Test<T, int> 
{
public:
	void add(T a, int b)
	{
		cout<<"add(T a, int b)"<<endl;
		cout<<(a + b)<<endl;	
	}
};

//��ָ�����͵��ػ��ֲ���ԭ��ģ���ȱ�� ��ָ�벻�ܽ��мӼ����� 
template <typename T>
class Test<T*, T*> 
{
public:
	void add(T* a, T* b)
	{
		cout<<"add(T1* a, T2* b)"<<endl;	
	}
};


int main(int argc, char *argv[]) {
	
	int i = 0;
	int j = 0;
	
	Test<double, int> t1;//<T, int> 
	Test<int, int> t2;//<T, int>
	Test<int*, int*> t3; //<T*, T*> 
	
	t1.add(2.3, 1);
	t2.add(1, 2); 
	t3.add(&i,&j);
	
	return 0;
}
