
////////////////////////////////////////////////////////////////////
//
//   File Name : Program19.c
//   Description : Check Even or Odd
//   Author : Samyak kailas Medhe 
//   Date : 11/05/2025 
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>


bool ChkEven(int iNo)
{

    if(iNo % 2 == 0)
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
    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d : is Even number \n",iValue);
    }
    else
    {
        printf("%d : is Odd number  \n ",iValue);

    }

    return 0 ;
}