#include<stdio.h>
int main()
{
    int marks;
    printf("ENter the marks:\n");
    scanf("%d", &marks);
    if (marks == 100)
    {
       printf("Bihar topper students");
    }
    else if (marks >= 80 && marks <= 100)
    {
       printf("Genius students");
    }
    else if (marks >= 60 && marks <= 80)
    {
       printf("First division pass");
    }

    else if (marks >= 30 && marks <= 60)
    {
        printf("Average students");
    }
    else{
        printf("Fail");
    }
}