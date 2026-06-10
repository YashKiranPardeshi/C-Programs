#include<stdio.h>

    int main()
    {
        int marks = 75; //Integer variable 'marks' stores the student's marks.

        if(marks >= 90) //Check if marks are greater than or eual to 90
        {
            printf("Grade A"); // grade A
        }
        else if(marks >= 70) // Grade B
        {
            printf("Grade B");
        }
        else if(marks >= 50) // grade C
        {
            printf("grade c");
        }else   // Fail
        {
            printf("fail");
        }

        return 0;       // End Program
    }