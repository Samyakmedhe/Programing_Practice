

#include<stdio.h>

void display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iValue ; iCnt++)
    {
        printf(" * \n");
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