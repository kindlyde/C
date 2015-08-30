#ifndef _SMART_POINTER_DEF_H_
#define _SMART_POINTER_DEF_H_

#include "smart_pointer.h"

template <typename T>
smart_pointer<T>::smart_pointer()
{
	m_pointer = NULL;
}

template <typename T>
smart_pointer<T>::smart_pointer(const T* pointer)
{
	m_pointer = const_cast<T*>(pointer);
}

template <typename T>
smart_pointer<T>::~smart_pointer()
{
	delete m_pointer;	
}
template <typename T>
T& smart_pointer<T>::operator*()
{
	return *m_pointer;
}
	
template <typename T>	
T* smart_pointer<T>::operator->()
{
	return m_pointer;
}
#endif
