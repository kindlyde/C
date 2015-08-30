#include <stdio.h>

struct SV
{
    int x;
    int y;
    int z;
};

struct SR
{
    int& x;
    int& y;
    int& z;
};

int main()
{
    SV sv = {1, 2, 3};
    SR sr = {sv.x, sv.y, sv.z};
    
    printf("&sv = %p\n", &sv);
    printf("&sv.x = %p\n", &sv.x);
    printf("&sv.y = %p\n", &sv.y);
    printf("&sv.z = %p\n", &sv.z);
    
    printf("&sr = %p\n", &sr);
    printf("&sr.x = %p\n", &sr.x);
    printf("&sr.y = %p\n", &sr.y);
    printf("&sr.z = %p\n", &sr.z);
    
    SV& rsv = sv;
    
    rsv.x = 4;
    rsv.y = 5;
    rsv.z = 6;
    
    printf("sv.x = %d\n", sv.x);
    printf("sv.y = %d\n", sv.y);
    printf("sv.z = %d\n", sv.z);
    
    return 0;
}

