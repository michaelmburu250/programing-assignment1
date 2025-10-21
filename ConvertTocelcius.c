/*
Author: Michael Mburu
Reg:CT100/G/26177/25
Date:18/10/2025
Description:convert to Celcius
*/

#include <stdio.h>
//function prototype

float converttocelcius(float fahrenheits){
float celcius;
celcius=((fahrenheits-32)*5/9);
return celcius;
}
int main(){
float fahrenheits,celcius;

// function call
printf("Enter temperature in fahrenheits:");
scanf("%f" ,&fahrenheits);

//call the function 
celcius=converttocelcius(fahrenheits);
   //results
   
   printf("The celcius is:%.2f\n",celcius);
   return 0;

}




    