#ifndef _SMART_POINTER_H_
#define _SMART_POINTER_H_

template <typename T>
class smart_pointer{
protected:
	T* m_pointer;
public:
	smart_pointer();//��ָ֤���ʼ������ȷ�� 
	smart_pointer(const T* pointer);
	~smart_pointer();
	
	T& operator*();
	T* operator->();
};

#endif
