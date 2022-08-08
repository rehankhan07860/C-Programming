#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    if (age > 18)
    {
       printf("You can give the vot");
    }
    else {
        printf("You can't give the vot");
    }
}