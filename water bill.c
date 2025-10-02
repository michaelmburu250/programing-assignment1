//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:water units
*/
#include<stdio.h> //printf(),scanf();

//main function 
int main(){
int units;
float bill;
//prompt user to enter number of consumed waterunits
printf("Enter water units");
scanf("%d",&units);
if(units>0&&units<=30)
{
bill=units*20;
}
else if(units>30&&units<=60)
{
bill=30*20+((units-30)*25);
}
else if(units>60)
{
bill=30*20+((units-30)*25)+((units-60)*30);
}
else{
printf("number above zero");
return 1;
}
//output bill
printf("waterbills%.2ftotal_bill",bill);

return 0;
}