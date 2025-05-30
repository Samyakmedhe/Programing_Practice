#include<stdio.h>
#include<stdbool.h>

bool CheckDigits(char ch)
{
    if((ch >= '0' )&&(ch<= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bret = false;
    printf("Enter Character : \n");
    scanf("%c",&cValue);
    bret = CheckDigits(cValue);
    if(bret == true)
    {
        printf("%c is Digit\n");
    }
    else
    {
        printf("%c is NOT Digit\n");
    }
   
    return 0 ;
}