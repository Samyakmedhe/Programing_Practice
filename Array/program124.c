#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of the elment : \n");
    scanf("%d",&iLength);
    // Step 1 : allocate the memory 
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Enable to allocate memmory \n");
        return -1;
    }
    // Step 2 : Use that memmory 
    //use 

    //Step 3 : Free the Memory 
    free(ptr);
    
    
    return 0;

}