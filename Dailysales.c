//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:Daily sales file
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Open the file in read mode
    file = fopen("sales.txt", "r");

    // Check if file exists / opened successfully
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    // Read all transaction values from the file
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    // Close the file
    fclose(file);

    return 0;
}

}