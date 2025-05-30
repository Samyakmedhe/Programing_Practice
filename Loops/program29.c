////////////////////////////////////////////////////////////////////
//
//   File Name : Program26.c
//   Description : Factorial of Numbers
//   Author : Samyak kailas Medhe 
//   Date : 11/05/2025 
//
////////////////////////////////////////////////////////////////////

#define WRONG_INPUT -1
#include<stdio.h>

unsigned long Factorial(unsigned int iNo)
{
    int iCnt = 0 ;
    unsigned long int iFact = 1;
    if(iNo < 0)
    {
        return WRONG_INPUT;
    }
    else
    {
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        
    }
   return iFact;
}
int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);
    if(iRet == WRONG_INPUT)
    {
        printf("Wrong Input ❌ : Factorial always positive number \n");
    }
    else
    {
        printf("----------------\n");
        printf("Factorial is : %lu \n",iRet);

    }

    return 0 ;
} 