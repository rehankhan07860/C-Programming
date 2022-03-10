#include<stdio.h>
int main()
{
    int number;
    printf("Enter the any number: ");
    scanf("%d", &number);
    if (number%2 == 0)
    {
      printf("It's even no: ");
    }else{
        printf("It's odd no: ");
    }
    }