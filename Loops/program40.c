#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo)
{
    int iCnt = 0;
   
    bool bFlag = true;

    if( iNo <  0)
    {
        printf("Negative value is not in Factors ❌ , i Am Considering its positive value   \n");
        iNo = -iNo;
    }
 
    for(iCnt = 2 ; iCnt < iNo/2 ; iCnt++)
    {
        
        if((iNo % iCnt) == 0 )
        {   
           bFlag = false;
           break;
            
        }
       
    }
    return bFlag;
   
}

int main()
{

    int iValue = 0;
    bool bRet = false;


    printf("Enter Number to display there Factors : ");
    scanf("%d", &iValue);


    bRet = ChkPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is Not prefect number \n",iValue);

    }

    return 0;
}