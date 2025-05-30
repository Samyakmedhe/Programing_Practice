#include<stdio.h>


void Display(char *str)
{
    printf("your Name is : %s \n",str);
}

int main()
{
   
    char Arr[50];
    printf("Enter your name : ");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0 ;
}