#include <cs50.h>
#include <stdio.h>

int collatz (int n, int count);

int main(void)
{
    // Ask user for collatz number
    int number = get_int("Number: ");

    // Call collatz
    int steps = collatz(number, 0);

    // Print how many steps it took to get to 1
    printf("%i steps\n", steps);

}

int collatz (int n, int count)
{
    // Base case
    if (n == 1)
        return count;

    // If number is even
    if (n % 2 == 0)
        return collatz (n/2, count + 1);

    // If odd
    return collatz (3*n + 1, count + 1);

}