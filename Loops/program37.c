#include<stdio.h>


void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    
    if( iNo <  0)
    {
        printf("Negative value is not in Factors ❌ , i Am Considering its positive value   \n");
        iNo = -iNo;
    }
    printf("Factors of %d is : \n",iNo);
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        
        if((iNo % iCnt) == 0 )
        {   
            if(iCnt % 2 == 0 )
            {
                printf("Factor is : %d\n",iCnt);
            }
            
        }
    
    }

}

int main()
{

    int iValue = 0;

    printf("Enter Number to display there Factors : ");
    scanf("%d", &iValue);


    DisplayEvenFactors(iValue);

    return 0;
}