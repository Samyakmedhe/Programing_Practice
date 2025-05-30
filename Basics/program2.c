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
    int total = 500;
    int ObtainMarks = 320;
    float  percentage = 0.0f;
    percentage = (ObtainMarks / total) * 100;

    printf("Precentage is : %f\n", percentage);
    return 0 ;


   
}