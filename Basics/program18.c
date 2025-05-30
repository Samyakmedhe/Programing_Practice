

#include<stdio.h>

int Calculate(int iValue)
{
    int iCnt = 0;
    int isum = 0;

    for(iCnt = 1 ; iCnt <= iValue  ; iCnt++)
    {
       
        isum = isum + iCnt;
       
        printf("+ %d\n",iCnt);
       
    }
    return isum;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter Frequance : ");
    scanf("%d",&iValue);

    iret = Calculate(iValue);
    printf("----------\n");

    printf("%d\n",iret);

    return 0 ;

}