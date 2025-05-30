//Input : 4
// Output : * * * * 

/*
    Start
        Accept the frequence 
        Iterate from 1 to that Freqence 
            Display * on screen 
        Contiune  


    stop
*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf(" * ");
    }
    printf("\n");
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