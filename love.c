#include<stdio.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
int main()
{
    int i;
    
   
    for (int i = 0; i < 500; i++)
    {
       printf(ANSI_COLOR_BLUE "\x1b[46m I LOVE YOU SAJIYA " ANSI_COLOR_RESET);
    }
    
}