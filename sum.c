#include<stdio.h>
int main()
{
    int x, y, c;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    c = x + y;
    printf("Sum is: %d + %d = %d", x, y, c);
}