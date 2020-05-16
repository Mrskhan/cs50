#include <stdio.h>
#include <cs50.h>

int collatz(int n);
int main (void)
{
    int number = get_int("Number: ");
    printf("%i\n", collatz(number));
}

int collatz(int n)
{
    int step = 0;
    if (n == 1)
        return step;
    else if (n%2 == 0)
    {
        step += collatz(n/2) + 1;
    }
    else if (n%2 != 0)
    {
        step += collatz(((3*n)+1)) + 1;
    }
return step;
}
