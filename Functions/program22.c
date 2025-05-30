////////////////////////////////////////////////////////////////////
//
//   File Name : Program22.c
//   Description : Check Even or Odd
//   Author : Samyak kailas Medhe 
//   Date : 11/05/2025 
//
////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>


bool CheckDivisible(int iNo)
{
   if(iNo % 5 == 0 )
   {
        return true;
   }
   else
   {
    return false;
   }
}
int main()
{

    int iValue = 0;
    bool bRet = false;


    printf("Enter Number : ");
    scanf("%d",&iValue);
    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d : is Divisible by 5 \n",iValue);
    }
    else
    {
        printf("%d :  is Not Divisible by 5 \n",iValue);

    }

    return 0 ;
}