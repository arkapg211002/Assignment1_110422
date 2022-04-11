/* Write a C program to compute Simple and Compound Interest. Take inputs from the user.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci;
    printf("Enter the principal amount\n");
    scanf("%f",&p);
    printf("Enter the rate of interest\n");
    scanf("%f",&r);
    printf("Enter the time in years\n");
    scanf("%f",&t);
    si=p*r*t/100;
    ci=(p*pow((1+r/100),t))-p;
    printf("Simple Interest is %f\n",si);
    printf("Compound Interest is %f\n",ci);
    return 0;
}