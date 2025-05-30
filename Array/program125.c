#include<stdio.h>
#include<stdlib.h>

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

    printf("Entered Elements are : \n");
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    

    // Step 2 : Use that memmory
     
    //use 

    //Step 3 : Free the Memory 
    free(ptr);
    
    
    return 0;

}