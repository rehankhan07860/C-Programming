#include<stdio.h>
int main()
{
    int dividend, divisor, quitient, remainder;
    printf("Enter dividend:");
    scanf("%d", &dividend);
    printf("Enter divisor");
    scanf("%d", &divisor);

    quitient = dividend/divisor;
    remainder = dividend%divisor;
    printf("quitient is %d", quitient);
    printf("remainder is %d", remainder);

}