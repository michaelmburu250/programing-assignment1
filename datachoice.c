//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:data bundle
*/
#include<stdio.h> //printf(),scanf();

//main function 
int main(){
int choice;
//prompt user to enter choices
printf("Enter choice");
scanf("%d",&choice);

if(choice==1)
{
printf("You have selected 100mb cost=ksh50");
}
else if(choice==2)
{
printf("You have selected 500mb cost=200");
}
else if(choice==3)
{
printf("You have selected 1GB cost=350");
}
else if(choice==4)
{
printf("You have selected 2GB cost=600");
}
else{printf("incorrect choice");
}
return 0;
}