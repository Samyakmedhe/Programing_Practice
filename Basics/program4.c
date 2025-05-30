////////////////////////////////////////////////////////////////////
//
//   File Name : Program2.c
//   Description : used to calulate percentage 
//   Author : Samyak kailas medhe 
//   Date : 28/04/2025 
//
////////////////////////////////////////////////////////////////////




#include<stdio.h>

int calulatePercentage(float Value1 , float Value2)
{
    float  percentage = 0.0f;
    percentage = ((float)Value2 / (float)Value1) * 100;
    return percentage;
}
int main()
{
    int total = 0;
    int ObtainMarks = 0;
    printf("Enter Total Marks : \n");
    scanf("%d",&total);
    printf("Enter Obtain Marks : \n");
    scanf("%d",&ObtainMarks);

    float Answer = calulatePercentage(total, ObtainMarks);
    printf("Precentage is :  %.2f %%\n", Answer);
    return 0 ;


   
}