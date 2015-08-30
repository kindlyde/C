#include <stdio.h>

//extern "C"
//{
    
    void func(int x)
    {
        const int i = 1;
        int& ri = const_cast<int&>(i);
        
        ri = 5;
        
        printf("i = %d\n", i);
        printf("ri = %d\n", ri);
    }

//}

void func(const char* s)
{
    printf("%s\n", s);
}

int func(int a, int b)
{
    return a + b;
}

int main()
{
    func(1);
    func("Delphi Tang");
    func(1, 2);
    
    return 0;
}

