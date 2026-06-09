#include <stdio.h> // Headr File for printf()

int main()         // Program starts here
{
        int a = 10, b =5; // Declare and initialize variables

        printf("%d\n", a > b);
        // Checks if a is greater than b 
        // 10 > 5 = true (1)
        printf("%d\n", a < b);
        // Checks if a is less than b 
        // 10 < 5 = false (0)
        printf("%d\n", a == b);
        // checks if a is equal to b
        // 10 == 5 = false (0)
        printf("%d\n", a != b);

        // Checks if a is not equal to b
        // 10 != 5 = true (1)

return 0; //End of program
}