#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the integer");
    scanf("%d", &n);
    for (int i = 1; i <= 20; i++)
    {
      printf("\n%d * %d = %d", n, i, n*i);
    }
    
}