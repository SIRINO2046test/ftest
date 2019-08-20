#include "main.h"

int main()
{
    uint8_t f1 = 0;
    uint8_t f2 = 0;
    uint8_t r1 = 0;
    uint8_t r2 = 0;

    f1 = 10;
    f2 = 4;

    r1 = add(f1,f2);
    r2 = minus(f1,f2);

    printf("%d\n",r1);

    printf("%d\n",r2);

    printf("end\n");

    return 0;
}


uint8_t add(uint8_t a,uint8_t b)
{
    return (a+b);
}


uint8_t minus(uint8_t a,uint8_t b)
{
    if(a>b)
    {
        return (a-b);
    }
    else
    {
        return (b-a);
    }
}