#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch > 65 )
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
    bret = CheckCapital(cValue);
    if(bret == true)
    {
        printf("%c is capital\n");
    }
    else
    {
          printf("%c is NOT capital\n");
    }
   
    return 0 ;
}