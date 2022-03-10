#include<stdio.h>
int main()
{
    char operation;
    double n1, n2;
    printf("Enter the operator:");
    scanf("%c", &operation);
    printf("Enter the two no:");
    scanf("%lf", &n1, &n2);
    switch (operation)
    {
    case '+':
    printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
        break;
    case '-':
    printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
        break;
    case '*':
    printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
    break;
    case '/':
    printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
    break;
    
    default:
      printf("This is error not define");
    }
}