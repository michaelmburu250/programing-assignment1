//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:C student exam info filles
*/
#include <stdio.h> //printf(),scanf(),fopen(),fclose()
int main(){
int student_information;
int student_name;
int reg_number;
int total_marks;

FILE *fptr;
//create a file
fptr=fopen("c:\\users\\Michael\\Documents\\c program\\results.dat.bin","wb+");

//user input
printf("student_information\n");

printf("Enter student_name:\n");
scanf("%t", &student_name);

printf("Enter reg_number:\n");
scanf("%t",&reg_number);

printf("Enter total_marks:\n");
scanf("%t",&total_marks);

//write user input to results.dat.bin
fprintf(fptr,"The user entered student_name:%t\n" ,student_name);
fprintf(fptr,"The user entered reg_number:%t\n",reg_number);
fprintf(fptr,"The user entered total_marks:%t\n",total_marks);

//close the file
fclose(fptr);
printf("results written to results.dat.bin");
return 0;
}
	

 

    