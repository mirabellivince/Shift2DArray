/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ShiftArray(int numbers[11][5], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i+5 < rows)
            {
                numbers[i][j] = numbers[i+5][j];
            }
            
            else
            {
                numbers[i][j] = 0;
            }
        }
        
    }
    
    
    
    
}



int main()
{
    int numbers[11][5];
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int cols = sizeof(numbers[0])/sizeof(numbers[0][0]);
    
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            numbers[i][j] = i;
        }
    }
    
    ShiftArray(numbers, rows, cols);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%i ",numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}