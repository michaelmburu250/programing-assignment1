//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:C library filles
*/
#include <stdio.h> //printf(),scanf(),fopen(),fclose()
int main(){
FILE *ftpr;
//create a file
ftpr=fopen("c:\\users\\documents\\librarian\\c program\\borrowed_book.txt","w");

//writing to file
fprintf (ftpr,"Don't delete previous book titles");
fprintf(ftpr,"Store title of book");

//output on user screen
printf("previous book titles not deleted \n" );
printf("New title book stored successfully");

//close file
fclose(ftpr);
return 0;
}
	

 

    