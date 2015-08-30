#include <cstdlib>
#include <iostream>

using namespace std;

int MemSet(void* dest, unsigned int length, unsigned char v)
{
    if( dest == NULL )
    {
        return -1;
    }
    
    if( length < 4 )
    {
        return -2;
    }
    
    unsigned char* p = (unsigned char*)dest;
    
    for(int i=0; i<length; i++)
    {
        p[i] = v;
    }
    
    return 0;
}

int main(int argc, char *argv[])
{
    int ai[5];
    double ad[4];
    char ac[3];
    int ret;
    
    ret = MemSet(ai, sizeof(ai), 0);
    
    if( ret == 0 )
    {
		/*正常处理代码*/
    }
    else if( ret == -1 )
    {
		/*异常处理代码*/
    }
    else if( ret == -2 )
    {
    }

    
    ret = MemSet(ad, sizeof(ad), 1);
    
    /*重复检查代码是否发生异常*/
    if( ret == 0 )
    {
    }
    else if( ret == -1 )
    {
    }
    else if( ret == -2 )
    {
    }
    
    return EXIT_SUCCESS;
}
