#include <cs50.h>
#include <stdio.h>

int fib(int first, int second, int limit);

int main(void)
{
    // Ask user fib limit
    int n = get_int("Fibonacci sequerence limit: ");

    // Call fib
    fib(0, 1, n);
}

int fib(int first, int second, int limit)
{
    // Base case
    if (first + second > limit)
        return 0;

    // Print first 0 and 1
    if (first + second == 1)
        printf("%i\n%i\n", first, second);

    // Printing fib number
    printf("%i\n", first + second);

    // Recursive case
    return fib(second, first + second, limit);
}