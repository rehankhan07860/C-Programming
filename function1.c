#include<stdio.h>
void rehan();
int main()
{
    printf("Create a two no add using function");
    rehan();
}
void rehan()
{
    int x, y, sum;
    printf("Enter two no : ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf("sum = %d + %d = %d", x, y, sum);
}