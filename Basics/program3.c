////////////////////////////////////////////////////////////////////
//
//   File Name : Program2.c
//   Description : used to calulate percentage 
//   Author : Samyak kailas medhe 
//   Date : 28/04/2025 
//
////////////////////////////////////////////////////////////////////




#include<stdio.h>


int main()
{
    int total = 400;
    int ObtainMarks = 323;
    float  percentage = 0.0f;
    percentage = ((float)ObtainMarks / (float)total) * 100;

    printf("Precentage is :  %.2f %%\n", percentage);
    return 0 ;


   
}