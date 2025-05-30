#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize)
{
    int iCnt = 0 ,iSum = 0 , iCount = 0;
    printf("odd Elements of Array are : \n");
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }

    }
    if(iCnt == iSize)
    {
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0 ;
    bool bRet = false;

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
    bRet = Search(ptr,iLength);
    if(bRet == true)
    {
        printf("Array Contain 11 in it ");
    }
    else
    {
        printf("Array is not Contain 11 in it ");   
    }
    //use 

    //Step 3 : Free the Memory 
    free(ptr);
    
    
    return 0;

}