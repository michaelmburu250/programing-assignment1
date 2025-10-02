//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:Eligibility
*/
#include<stdio.h> //printf(),scanf();

//main function 
int main(){
int attendance;
int average_marks;
//prompt user to enter attendance
printf("Enter attendance:\t");
scanf("%d",&attendance);
//prompt user to enter average marks
printf("Enter average mark:\t");
scanf("%d",&average_marks);
if(attendance>=75 &average_marks>=40){
printf("You are eligible");
}
else{
printf("Not eligible ");
}

return 0;
}