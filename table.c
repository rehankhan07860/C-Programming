#include<stdio.h>
int main()
{
int n;
printf("Enter the n no:");
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < n; i++)
   {
       printf("%d %d\t",(i*j));
   }
   printf("\n");
 }  
}
