
#include <stdio.h>
#include <stdbool.h>

/*=========================================================================
  Constants and definitions:
==========================================================================*/


/*-------------------------------------------------------------------------
Description: ex0 - practice program
 -------------------------------------------------------------------------*/

// Declare function that will be used:


// Functions:
int main() {
    int num = 0; 
    printf("Enter size of input:\n");
    if (scanf("%i", &num) == 1) {
        printf("Number OK");
    } else if (num <= 0) {
        printf("Invaild size");
        return 0;
    } else {
        return 0;
    }
    printf("Number is: %i /n", num);       
    return 1;
    }
