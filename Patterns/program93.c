//Input : 4  4 
/*
   1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
  
*/
#include<stdio.h>

void Display(int iRow, int  iCol)
{
    int i = 0, j = 0;
    for(i = 1 ; i <= iRow ; i++)
    {
         for(j = 1 ; j <= iCol ; j++)
        {
          printf("%d\t",j);
    
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Row  :");
    scanf("%d",&iValue1);
    printf("Enter columns :");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);
    return 
    0 ;
}
// Time Complexity O(2N)
// N is a natural number 
// where N>= 0 and N<= Inifinity