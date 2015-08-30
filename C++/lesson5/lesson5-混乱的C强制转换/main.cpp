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
    
    //将一个整型值转换成函数指针，该值地址出存在函数么？
	PF* pf = (PF*)v; 
    
    //将超出其类型的数值强制转换成该类型
	char c = char(v); 
    
    //很明显函数调用不存在 
    pf(v);
    
    //将一个整型值转换成指向结构体的执着呢，该值地址处存在其结构体的数据么？
    Point* p = (Point*)v;
    
    printf("p->x = %d\n", p->x);
    printf("p->y = %d\n", p->y);
    
    printf("Press any key to continue...");
    getchar();
    return 0;
}

