//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:function to determine electric_bill
*/
#include<stdio.h> 
//function prototype
float total_fare( float distance_covered)
{
float fare;
float totalfare=distance_covered * 50;
return fare;
}
int main()
{
float distance_covered;
float totalfare;

printf("Enter distance_covered:\n");
scanf("%f",&distance_covered);

//function call
totalfare=distance_covered * 50;
printf("The total fare is = ksh %2f\n",totalfare);
return 0;
}
    