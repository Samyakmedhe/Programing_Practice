//Input : 4 # 
// Output : #####
#include<stdio.h>

void Display(int iNo, char ch)
{
    int iCnt = 0;
    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf(" %c ",ch);
    }

    
    printf("\n");
}

int main()
{
    int iValue1 = 0;
    char cValue2 = '\0';

    printf("Enter Frequence :");
    scanf("%d",&iValue1);

    printf("Enter Character :");
    scanf(" %c",&cValue2);
    
   
    Display(iValue1, cValue2);
    return 
    0 ;
}
// Time Complexity O(2N)
// N is a natural number 
// where N>= 0 and N<= Inifinity