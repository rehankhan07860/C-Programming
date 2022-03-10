#include<stdio.h>
int fibonicci(int);
int main()
{
    int n, f;
    printf("Enter the no: ");
    scanf("%d", &n);
    f = fibonicci(n);
    printf("Fibonicci = %d", &f);
}
int fibonicci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else{
        return fibonicci(n - 1) + fibonicci(n - 2);
    }
    }