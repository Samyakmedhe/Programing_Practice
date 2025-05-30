
#include<stdio.h>

void Display(int iRow, int  iCol)
{
    int i = 0, j = 0;
    for(i = 1 ; i <= iCol ; i++)
    {
         for(j = 1 ; j <= iRow ; j++)
        {
          printf("*\t");
    
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 3;
    int iCol = 3;
   
    Display(iRow, iCol);
    return 
    0 ;
}
// Time Complexity O(2N)
// N is a natural number 
// where N>= 0 and N<= Inifinity