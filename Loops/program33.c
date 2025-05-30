#include<stdio.h>


void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    
    printf("Factors of %d is : \n",iNo);
    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        
        if((iNo % iCnt) == 0 )
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{

    int iValue = 0;

    printf("Enter Number to display there Factors : ");
    scanf("%d", &iValue);


    DisplayFactors(iValue);

    return 0;
}