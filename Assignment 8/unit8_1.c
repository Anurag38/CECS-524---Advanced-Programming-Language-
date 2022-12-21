/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int main()
{
   
 
    int rate,factor;
    
    printf("Enter the rate: ");
    scanf("%d",&rate);
    
    if ((rate == 1) || (rate == 2))
        factor = 2 * rate - 1;
 
    else if ((rate == 3) || (rate == 5))
        factor = 3 * rate + 1;
        
    else if ((rate == 4))
        factor = 4 * rate - 1;
        
    else if ((rate == 6) || (rate == 7) || (rate == 8)) 
        factor = rate - 2;
    
    else
        factor = rate;
 
    printf("Value of factor: %d ",factor);
 
    return 0;
}

