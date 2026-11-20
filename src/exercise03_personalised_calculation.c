/*
- ICS 2175 - Introduction to Computer Programming
- Laboratory 01 - Exercise 03: Personalised Calculation
 *
- Student Name: Promise Macharia
- Registration Number: ENB211-0012/2025
- Variant ID: V01
- Scenario: Stationery order cost
 *
- Instructions:
-   - Record your assigned variant details above.
-   - Use the two input values given for your variant.
-   - Perform the required arithmetic operation.
-   - Store the result in a meaningfully named variable.
-   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
    int unit_price = 25;
    int quantity = 6;
    int total_cost = unit_price * quantity;

    printf("Total cost: %d\n", total_cost);

    return 0;
}

Output:

Total cost: 150