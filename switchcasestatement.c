#include<stdio.h>
 int main()
 {
    int day = 2; //Store day mumber

    switch(day) // Check day value
    {
        case 1: //If day = 1
            printf("Monday");
            break; //Exit switch
        case 2: //If day = 2
            printf("Tuesday");
            break; //Exit switch
        case 3: // If day = 3
            printf("Wednesday");
            break; // Exit switch

        default: // IF no case matches
            printf("Invalid Day");
    }
    
    return 0; // End program
 }