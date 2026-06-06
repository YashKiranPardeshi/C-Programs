#include <stdio.h>      // Standard Input Output header File

int main()              // program Starts From Main Function

{
    int a = 10;         // Variable a stores value 10
    int b = 20;         // Variable b Stores value 20
    int temp;           // Temporary variable for

    temp = a;           //Store vqalue of a in temp
    a = b;              // Copy old value of a into b
    b = temp;

    printf("a = %d\n", a);      //Prints new value
    printf("b = %d", b);        // Prints new value

    return 0;           //  Program ends successfully

}