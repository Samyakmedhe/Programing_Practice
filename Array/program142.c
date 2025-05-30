#include<stdio.h>
#include<stdlib.h>


void MaximumMinimum(int Arr[], int iSize)
{
    int iCnt = 0,iMin = 0, iMax = 0;
    
    if((Arr == NULL )||(iSize <= 0 ))
    {
        printf("Invaild Input ...\n");
        return;
    }

    iMin = Arr[0];
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    iMax = Arr[0];
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    
    printf("Maximum Element is %d \n",iMax);
    printf("Minimum Element is %d \n",iMin);
    
}
int main()
{
    int * iPtr = NULL;
    int iLength = 0 ;
    int iCnt =  0;
   

    printf("Enter number of Elments : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate memmory ..");
        return - 1;

    }
    printf("Enter the Elments : \n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("\n Enter the number %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    MaximumMinimum(iPtr , iLength);
    
    
    free(iPtr);
    return 0 ;
}
//O(2N)