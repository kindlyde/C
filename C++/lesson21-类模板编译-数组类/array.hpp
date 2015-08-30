#ifndef __ARRAY_DEF_H_
#define __ARRAY_DEF_H_

#include "array.h"

template <typename T> 
Array<T>::Array(int length)
{
	if(length < 0)
	{
		length = 0;
	}
	
	m_length = length;
	m_space = new int[length];
}

template <typename T> 
Array<T>::Array(const Array& obj)
{
	m_length = obj.m_length;		
	m_space = new int[m_length];
	
	for(int i=0; i<m_length; i++)
	{
		m_space[i] = obj.m_space[i];	
	}
}

template <typename T> 
int Array<T>::length()
{
	return m_length;
}

template <typename T> 
T& Array<T>::operator[](int i)
{
	return m_space[i];
}

template <typename T> 
void Array<T>::destroy()
{
	m_length = -1;
	
	delete[] m_space;
}
#endif
