#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iSize)
{
    int iCnt = 0 ;
    printf("Entered Elements of Array are : \n");
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

}
int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0 ;

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
    Display(ptr,iLength);
    //use 

    //Step 3 : Free the Memory 
    free(ptr);
    
    
    return 0;

}