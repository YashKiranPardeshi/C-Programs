#include <stdio.h> // Header file for printf()


int main()  //Program starts main function
{
        int a = 10, b = 5; //declare and initialize variables

        printf("%d\n", (a > 5 && b > 2)); 
        // and Operator (&&)
        // 10 > 5 = true (1)
        // 1 && 1 = 1
        printf("%d\n", (a > 20 || b > 2));
        // Or Operator (||)
        // 10 > 20 = false (0)
        // 0 || 1 = 1 
        printf("%d\n", !(a > 5));
        // Not Operator (!)
        // 10 > 5 = true (1)
        // !1 = 0

return 0; //End OF Program
}