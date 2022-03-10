#include<stdio.h>
int main()
{
    double n;
    printf("Enter the any no: ");
    scanf("%lf", &n);
    if ( n >= 0)
    {
       printf("It is a positive no %.lf", n);
    }
    else if (n <= 0)
    {
       printf("It is a negative no %.lf", n);
    }
    else{
        printf("It is a negative no");
    }
    
    
}