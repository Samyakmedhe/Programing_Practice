/*
    Start 
        Aceept Percentage from user 
        If precentage is less than 0 and greater than 100 
            display as invaild input
        if precentage is greater than 0 and less than 35 
            display as Fail
        if precentage is greater than 35 and less than 50
            display as Pass class
        if precentage is greater than 50 and less than 60
            display as Second Class
        if precentage is greater than 60 and less than 70
            display as First class
        if precentage is greater than 70 and less than 100
            display as First class with distinction 
    Stop
*/


#include<stdio.h>



void PrecentageClass(float fPerc)
{  if((fPerc < 0.0f) || (fPerc > 100.0f))
    {
        printf("Invaild Input");
        return ;
    }
    if((fPerc > 0.0f)  &&(fPerc <35.0f))
    {
        printf("Fail");
        
    }
    else if ((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("Pass Class");
    }
    else if ((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("Pass Class");
    }
    else if ((fPerc >=60.0f )&& (fPerc < 70.0f))
    {
        printf("First Class");
    }
    else
    {
        printf(" First class with distinction ");
    }

}
int main()
{
    float fPerc = 0.0f;

    printf("Enter your Percentage : \n");
    scanf("%f",&fPerc);

    PrecentageClass(fPerc);
    return 0 ;

}