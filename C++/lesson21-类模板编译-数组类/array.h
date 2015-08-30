#ifndef __ARRAY__H__
#define __ARRAY__H__

/*������*/
template <typename T> 
class Array{
public: 
	Array(int length);
	Array(const Array& obj);
	int length();
	void destroy();
	
	//����[]������������ʹ�����������ʱ�ͱȽϷ�������ʹ�������ϰ���� 
	T& operator[](int i); 
private:
	int m_length;
	int* m_space;
};

#endif
