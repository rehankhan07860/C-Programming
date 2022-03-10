#include<stdio.h>
int main()
{
    int i, j, k, l;
    for ( i = 0, j = 0, k = 0, l = 0; i < 4, j < 8, k <12, l<16; i++)
    {
       printf("\n%d %d %d %d", i, j, k, l);
       j+=2;
       k+= 3;
       l+= 4;
    }
    
}