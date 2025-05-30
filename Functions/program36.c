#include<stdio.h>


void DisplayFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    
    if( iNo <  0)
    {
        printf("Negative value is not in Factors ❌ , i Am Considering its positive value   \n");
        iNo = -iNo;
    }
    printf("Factors of %d is : \n",iNo);
    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        
        if((iNo % iCnt) == 0 )
        {
            printf("Factor is : %d\n",iCnt);
        }
        else
        {
            printf("Non Factors is : %d\n",iCnt);
        }
    }

}

int main()
{

    int iValue = 0;

    printf("Enter Number to display there Factors : ");
    scanf("%d", &iValue);


    DisplayFactorsNonFactors(iValue);

    return 0;
}