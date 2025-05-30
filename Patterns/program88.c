
#include<stdio.h>

void Display(int iRow)
{
    int i = 0;
    for(i = 1 ; i <= iRow ; i++)
    {
          printf("*\t");
    
    }
    printf("\n");
    for(i = 1 ; i <= iRow ; i++)
    {
          printf("*\t");
    
    }
    printf("\n");
    for(i = 1 ; i <= iRow ; i++)
    {
          printf("*\t");
    
    }
    printf("\n");
}

int main()
{
    int iRow = 3;
   
    Display(iRow);
    return 
    0 ;
}
// Time Complexity O(2N)
// N is a natural number 
// where N>= 0 and N<= Inifinity