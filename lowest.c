#include<stdio.h>
int main()
{
    double n1, n2, n3;
    printf("Enter the three no: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3)
    {
       printf("Smallest no is %.2f", n1);
    }
    if (n2 <= n1 && n2 <= n3)
    {
      printf("Smallest no is %.2f", n2);
    }
    if (n3 <= n1 && n3 <= n2)
    {
        printf("Smallest no is %.2f", n3);
    }
    
    
    
}