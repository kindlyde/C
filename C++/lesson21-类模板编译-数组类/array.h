#ifndef __ARRAY__H__
#define __ARRAY__H__

/*数组类*/
template <typename T> 
class Array{
public: 
	Array(int length);
	Array(const Array& obj);
	int length();
	void destroy();
	
	//重载[]操作符，这样使用数组类对象时就比较符合我们使用数组的习惯了 
	T& operator[](int i); 
private:
	int m_length;
	int* m_space;
};

#endif
