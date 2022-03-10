#include<stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the three no: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("%d is largest number", x);
    }if (y > x && y > z)
    {
        printf("%d is largest number", y);
    }if (z > x && z > y)
    {
        printf("%d is largest number", z);
    } if (x == y && x == z)
    {
       printf("All are equal");
    }