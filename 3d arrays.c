//simple c program
/*
name:Michael Mburu
reg:CT100/G/26177/25
description:3D array
*/
#include <stdio.h>

int main(){
	    int chain[3][5][10] = {
        {   // Branch 1
            {1,1,1,1,0,1,0,0,1,1};
            {1,1,1,1,1,1,0,1,0,1};
            {1,1,0,1,0,1,0,0,1,0};
            {1,0,1,0,1,0,1,0,1,1};
            {0,1,0,1,0,1,1,1,0,0};
        };
        {   // Branch 2
            {1,1,0,1,0,1,0,0,1,0};
            {0,1,1,1,0,1,0,1,1,1};
            {1,1,0,1,1,1,1,0,1,0};
            {0,1,0,1,1,0,1,1,1,,1};
            {1,0,1,1,0,0,1,1,0,0};
        };
        {   // Branch 3
            {0,1,1,1,1,0,1,0,1,1};
            {1,1,1,0,1,1,0,0,1,0};
            {0,0,1,0,0,0,0,1,1,1};
            {1,0,0,1,1,1,0,0,1,1};
            {0,1,1,0,1,0,1,1,1,1};
        };
    };

    int branch, floor, room;
    int Occupied = 0, Vacant = 0;

   
    for (branch = 0; branch < 3; branch++) {
        printf("\n=== BRANCH %d ===\n", branch + 1);
        printf("ROOM OCCUPANCY (1 = occupied, 0 = vacant)\n\n");

        for (room = 0; room < 10; room++)
            printf("R%-2d ", room + 1);
        printf("\n");

        int branchOccupied = 0, branchVacant = 0;

        for (floor = 0; floor < 5; floor++) {
            printf("Floor %d | ", floor + 1);
            for (room = 0; room < 10; room++) {
                printf(" %d  ", chain[branch][floor][room]);

                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                    Occupied++;
                } else {
                    branchVacant++;
                    Vacant++;
                }
            }
            printf("\n");
        }

        printf("\nBranch %d Summary ? Occupied: %d, Vacant: %d\n", 
               branch + 1, branchOccupied, branchVacant);
    }

  
    printf("\n=== TOTAL HOTEL CHAIN===\n");
    printf("Occupied Rooms: %d\n", Occupied);
    printf("Vacant Rooms:   %d\n", Vacant);
    printf("Rooms Overall:  %d\n", Occupied + Vacant);
	
	
	
	
	
	return 0;
	
}
 

    