#include<stdio.h>
int main()
{
    int age = 18;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
       printf("You are a young boy: ");
    }else if (age == 22)
    {
        printf("You are marraige allow the government according ");
    } else if (age == 15)
    {
       printf("You are not allow marraige the government according");
    }
    else{
        printf("You are child boy");
    }
    
}