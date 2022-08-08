#include<stdio.h>
int main()
{
 int a = 53, b = 354, c = 36;
 if(a > b)
 {
    if(a > c)
    {
        printf("%d", a);
    }
 }
 else if(b > c)
 {
    printf("%d", b);
 }
 else {
    printf("%d", c);
 }
}