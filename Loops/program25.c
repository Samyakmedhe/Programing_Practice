////////////////////////////////////////////////////////////////////
//
//   File Name : Program25.c
//   Description : Summation of Numbers
//   Author : Samyak kailas Medhe 
//   Date : 11/05/2025 
//
////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0 ;
    int Sum = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        Sum = Sum + iCnt;
        printf("%d + \n",iCnt);
    }
    return Sum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = Summation(iValue);
    printf("----------------\n");
    printf("Summation is : %d \n",iRet);

    return 0 ;
}