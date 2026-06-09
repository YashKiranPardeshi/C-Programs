#include<stdio.h>  // Header File for printf()

    int main() //Program execution starts from here
    {
        int a = 10, b = 3; // Declare and initialize variables

        printf("Addition = %d\n", a + b);
        // Add a and b
        // 10 + 3 = 10
        printf("Subtraction = %d\n", a - b);
        // sub a and b
        // 10 - 3 = 7
        printf("Multiplication = %d\n", a * b);
        // Mul a and b
        // 10 * 3 = 30
        printf("Division = %d\n", a / b);
        // Divides a by b
        // 10 / 3 = 3 (Integer Division)
        printf("Modulus = %d\n", a % b);
        // Returns the remainder
        // 10 % 3 = 1



        return 0;  // end of program
        
        }