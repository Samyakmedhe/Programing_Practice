

#include<stdio.h>

void display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        printf(" %d \n",iValue);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Input : ");
    scanf("%d",&iValue);

    display(iValue);

    return 0 ;

}