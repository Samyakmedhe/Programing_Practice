//Input : 4
// Output : 4321 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    
    for(iCnt = iNo ; iCnt >= 0 ; iCnt--)
    {
        printf(" %d \n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Frequence :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0 ;
}
// Time Complexity O(N)
// N is a natural number 
// where N>= 0 and N<= Inifinity