#include <stdio.h>

typedef void(PF)(int);

struct Point
{
    int x;
    int y;
};

int main()
{
    int v = 0x12345;
    
    //��һ������ֵת���ɺ���ָ�룬��ֵ��ַ�����ں���ô��
	PF* pf = (PF*)v; 
    
    //�����������͵���ֵǿ��ת���ɸ�����
	char c = char(v); 
    
    //�����Ժ������ò����� 
    pf(v);
    
    //��һ������ֵת����ָ��ṹ���ִ���أ���ֵ��ַ��������ṹ�������ô��
    Point* p = (Point*)v;
    
    printf("p->x = %d\n", p->x);
    printf("p->y = %d\n", p->y);
    
    printf("Press any key to continue...");
    getchar();
    return 0;
}

