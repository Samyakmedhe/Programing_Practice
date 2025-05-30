////////////////////////////////////////////////////////////////////
//
//   File Name : Program2.c
//   Description : used to calulate percentage 
//   Author : Samyak kailas Medhe 
//   Date : 28/04/2025 
//
////////////////////////////////////////////////////////////////////




#include<stdio.h>

float CalulatePercentage(int Value1 , int Value2)
{
    float  percentage = 0.0f;
    percentage = ((float)Value2 / (float)Value1) * 100;
    return percentage;
}
int main()
{
    int itotal = 0;
    int iObtainMarks = 0;
    printf("Enter Total Marks : \n");
    scanf("%d",&itotal);
    printf("Enter Obtain Marks : \n");
    scanf("%d",&iObtainMarks);
    float fAnswer = 0.0f;
    fAnswer = CalulatePercentage(itotal, iObtainMarks);
    printf("Precentage is :  %.2f %%\n", fAnswer);
    return 0 ;


   
}