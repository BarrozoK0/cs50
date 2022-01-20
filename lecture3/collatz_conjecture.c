#include <cs50.h>
#include <stdio.h>

int collatz (int n);

int main(void)
{
    // Ask user for collatz number
    int number = get_int("Number: ");

    // Call collatz
    int steps = collatz(number);

    // Print how many steps it took to get to 1
    printf("%i steps\n", steps);

}

int collatz (int n)
{
    // Base case
    if (n == 1)
        return 0;

    // If number is even
    if (n % 2 == 0)
        return 1 + collatz(n/2);

    // If odd
    return 1 + collatz(3*n + 1);

}