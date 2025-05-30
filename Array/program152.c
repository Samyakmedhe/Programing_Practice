#include<stdio.h>

int main()
{
   
    char Arr[50];
    printf("Enter your name : ");
    scanf("%[^'\n']s",Arr);
    printf("your name is : %s \n",Arr);
    return 0 ;
}