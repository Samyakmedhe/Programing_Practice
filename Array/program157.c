#include<stdio.h>


int CountCaptial(char *str)
{
    int iCount = 0;

    while(*str !='\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        
        str++;
    }
    return iCount;
}

int main()
{
   
    char Arr[50];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCaptial(Arr);
    printf("Number of Character are : %d\n",iRet);

    return 0 ;
}