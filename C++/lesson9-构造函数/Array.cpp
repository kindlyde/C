#include "array.h"

Array::Array(int length)
{
	if(length < 0)
	{
		length = 0;
	}
	
	m_length = length;
	m_space = new int[length];
}

Array::Array(const Array& obj)
{
	m_length = obj.m_length;		
	m_space = new int[m_length];
	
	for(int i=0; i<m_length; i++)
	{
		m_space[i] = obj.m_space[i];	
	}
}

int Array::length()
{
	return m_length;
}

void Array::set_data(int index, int value)
{
	m_space[index] = value;	
}

int Array::get_data(int index)
{
	return m_space[index];
}

void Array::destroy()
{
	m_length = -1;
	
	delete[] m_space;
}
