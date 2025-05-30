#include<stdio.h>
#include<stdlib.h>


int  Maximum(int Arr[], int iSize)
{
    int iCnt = 0,iMax = 0;
    
    if((Arr == NULL )||(iSize <= 0 ))
    {
        printf("Invaild Input ...\n")
        return -1;
    }


    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;

}
int main()
{
    int * iPtr = NULL;
    int iLength = 0 ;
    int iCnt =  0;
    int iRet = 0;

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

    iRet = Maximum(iPtr , iLength);
    printf("Maximum number is : %d ",iRet);
    


    free(iPtr);
    return 0 ;
}