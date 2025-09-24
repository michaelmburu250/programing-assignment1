//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:loan qualifications 
*/
#include<stdio.h> //printf(),scanf();

//main function 
int main(){
int age;
int income;

//prompt output
printf("Enter age:\n");
scanf("%d",&age);
printf("Enter income:\n");
scanf("%d",&income);
if(age>=21 && income >=21000){
printf("congratulations you qualify for the loan");
}
else{
printf("unfortunately we are unable to offeryou with a loan at this time");
}

return 0;
}