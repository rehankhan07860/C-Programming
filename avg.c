#include<stdio.h>
int main()
{
   int a[10], i, sum = 0;
   float avg;
   printf("Enter the 10 no");
      for (int i = 0; i < 9; i++)
   {
       scanf("%d", &a[i]);
    
   }
      for (int i = 0; i < 9; i++);
      {
          sum = sum + a[i];
      }
       avg = sum / 10.0;
       printf("Avg is %lf", &avg);
    }
   
   
