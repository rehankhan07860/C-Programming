#include<stdio.h>
int main() 
{
    long long n; 
    int count = 0;
    printf("Enter the no: ");
    scanf("%lld", &n);
    do
    {
       n /=10;
       ++count;
    } while (n != 0);
    printf("Enter the digits: %d", count);
    }