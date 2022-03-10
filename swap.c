#include<stdio.h>
int main()
{
    double first, second, temp;
    printf("Enter the first no:");
    scanf("%lf", &first);
    printf("Enter the second no:");
    scanf("%lf", &second);
    temp = first;
    first = second;
    second = temp;
    printf("\nAfter first no swap: = %.2lf", first);
    printf("\nAfter second no swap: = %2.lf", second);

    }