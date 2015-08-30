#ifndef __ARRAY__H__
#define __ARRAY__H__

/*Êı×éÀà*/
class Array{

public: 
	Array(int length);
	Array(const Array& obj);
	int length();
	void set_data(int index, int value);
	int get_data(int index); 
	void destroy();
	
private:
	int m_length;
	int* m_space;
};


#endif
