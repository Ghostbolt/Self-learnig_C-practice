/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //variable declaration
    char chOperator;
    double dNum1, dNum2;
    
    while (1)
    {
        //Operator choice selection
        printf("Choose an Operator:\n+, -, *, /\nChoice:");
        scanf(" %c", &chOperator);
        
        //Value taking
        printf("Enter the first and Second values for the calculation: ");
        scanf(" %lf %lf", &dNum1, &dNum2);
        
        //processing for Addition
        if (chOperator == '+')
        {
            printf("%.1lf + %.1lf = %.1lf\n", dNum1,dNum2, dNum1+dNum2);
        }
        //processing for subtraction
        else if (chOperator == '-')
        {
            printf("%.1lf - %.1lf = %.1lf\n", dNum1,dNum2, dNum1-dNum2);
        }
        //processing for multiplicatiom
        else if (chOperator == '*')
        {
            printf("%.1lf * %.1lf = %.1lf\n", dNum1,dNum2, dNum1*dNum2);
        }
        //processing for division
        else if (chOperator == '/')
        {
            printf("%.1lf / %.1lf = %.1lf\n", dNum1,dNum2, dNum1/dNum2);
        }
        else
        {
            printf("Incorrect choice!\n");
        }
    }

  
}
