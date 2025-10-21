//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:function to determine electric_bill
*/
#include <stdio.h> //printf and scanf


void  electricbill(float units,float electric_bill)
{


if(units>0 && units<=100)
{
electric_bill=units*10;
}
else if( units<=200)
{
electric_bill=100*10 +((units-100)*15);
}
else 
{ 
electric_bill=100*10+100*15+(units-200)*20;
}
printf("the total electric bill: =%.2f",electric_bill);
 
}

//function declaration 
int main()
{
float units;
float electric_bill;
 
 printf("enter the number units consumed:");
 scanf("%f",&units);
 
 electricbill(units,electric_bill);
 
 return 0;
}
