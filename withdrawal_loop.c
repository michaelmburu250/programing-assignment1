#include <stdio.h>
/*simple c program 
name:michael Mburu 
reg::CT100/G/26177/25
description:withrawal_loop
*/
int main()
{
int account=1000;
int withdrawal;
int balance;

while(account>0){
printf("Enter withdrawal amount ");
scanf("%d",&withdrawal);
balance=account-withdrawal;
printf("Your balance is %d \n",balance);
account=balance;
}


return 0;}