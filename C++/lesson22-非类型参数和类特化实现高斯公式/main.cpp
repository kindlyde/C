#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//���з����Ͳ�����ģ��:Ԫ�����������ڼ����ʹ�õĺ��� 
template <int N>
class sum{
public:
	static const int Value = sum<N-1>::Value + N;
};

//���з����Ͳ�����ģ��ĵݹ����������ģ����ػ� 
template <>
class sum<1>{
public:
	static const int Value = 1;
};


int main(int argc, char *argv[]) {
	
	//�ڵڶ��α���ʱ����ʵ������ʱ���Ѿ�������ˣ���������ʱ�ķѵ�ʱ��Ҳ����ȡ��һ������ֵ��ʱ�� 
	cout<<sum<100>::Value<<endl;
	 
	return 0;
}
