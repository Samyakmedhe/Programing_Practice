#include<stdio.h>
#include<stdlib.h>
int SumOdd(int Arr[], int iSize)
{
    int iCnt = 0 ,iSum = 0 , iCount = 0;
    printf("odd Elements of Array are : \n");
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0 )
        {
           iSum = iSum + Arr[iCnt];
        }
    }
    return iCount;

}
int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0 ;
    int iRet = 0;

    printf("Enter the number of the elment : \n");
    scanf("%d",&iLength);
    // Step 1 : allocate the memory 
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Enable to allocate memmory \n");
        return -1;
    }
    printf("Enter the Elements : \n");
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    
    

    // Step 2 : Use that memmory
    iRet =  SumOdd(ptr,iLength);
    printf("%d\n",iRet);
    //use 

    //Step 3 : Free the Memory 
    free(ptr);
    
    
    return 0;

}