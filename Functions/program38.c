#include<stdio.h>


int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if( iNo <  0)
    {
        printf("Negative value is not in Factors ❌ , i Am Considering its positive value   \n");
        iNo = -iNo;
    }
 
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        
        if((iNo % iCnt) == 0 )
        {   
            iSum = iSum + iCnt;
            
        }
       
    }
    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet = 0;


    printf("Enter Number to display there Factors : ");
    scanf("%d", &iValue);


    iRet = SumFactor(iValue);
    printf("Sum of Factor is : %d\n",iRet);

    return 0;
}