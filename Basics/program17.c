

#include<stdio.h>

void display(int iValue)
{
    int iCnt = 0;
    for(iCnt = iValue ; iCnt >=1  ; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Frequance : ");
    scanf("%d",&iValue);

    display(iValue);

    return 0 ;

}