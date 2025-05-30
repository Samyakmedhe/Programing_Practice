#include<stdio.h>
#include<stdbool.h>

bool ChkPrefect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if( iNo <  0)
    {
        printf("Negative value is not in Factors ❌ , i Am Considering its positive value   \n");
        iNo = -iNo;
    }
 
    for(iCnt = 1 ; iCnt < iNo/2 ; iCnt++)
    {
        
        if((iNo % iCnt) == 0 )
        {   
            iSum = iSum + iCnt;
            
        }
       
    }

    if(iSum == iNo)
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


    printf("Enter Number to display there Factors : ");
    scanf("%d", &iValue);


    bRet = ChkPrefect(iValue);
    if(bRet == true)
    {
        printf("%d is prefect number ",iValue);
    }
    else
    {
        printf("%d is Not prefect number ",iValue3ewX);

    }

    return 0;
}