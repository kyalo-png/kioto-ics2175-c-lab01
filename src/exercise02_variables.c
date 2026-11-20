/*
- ICS 2175 - Introduction to Computer Programming
- Laboratory 01 - Exercise 02: Variables and Data Types
 *
- Student Name: Promise Macharia
- Registration Number: ENB211-0012/2025
 *
- Instructions:
-   - Declare and initialise one int, one float, one double and one char.
-   - Use meaningful variable names.
-   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int student_count = 35;
    float average_score = 78.5f;
    double pi_precise = 3.141592653589793;
    char grade_letter = 'A';

    printf("Student count: %d\n", student_count);
    printf("Average score: %.2f\n", average_score);
    printf("Precise pi: %.10lf\n", pi_precise);
    printf("Grade letter: %c\n", grade_letter);

    return 0;
}

Output:

Student count: 35
Average score: 78.50
Precise pi: 3.1415926536
Grade letter: A