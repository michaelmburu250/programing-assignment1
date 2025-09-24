//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:variables and data types
*/
#include<stdio.h> //printf(),scanf();

//main function 
int main(){
float radius,volume,surface_area,height;
float pi=3.142;

//prompt user input
printf("Enter radius:\n");
scanf("%f",&radius);
printf("Enter height:\n");
scanf("%f",&height);

//calculate volume and surface area
volume=pi*radius*height;
surface_area=2*pi*radius*radius+2*pi*radius*height;

//output
printf("volume of cylinder is %.2f\n",volume);
printf("surface area is %.2f\n",surface_area);
return 0;
}