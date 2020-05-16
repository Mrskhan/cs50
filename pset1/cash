#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //user input variable
    float change = 0.0;
    //number of coins
    int coin = 0;
    //validate input
    while(change <= 0)
    {
        change = get_float("How much change you owe?: ");
    }
    //convert change amount into cents
    int cent = round(change * 100);
    //check for quarters
    while (cent >= 25)
    {
        coin++;
        cent = cent - 25;
    }
    //check for dimes
    while(cent >= 10)
    {
        coin++;
        cent = cent - 10;
    }
    //check for nickles
    while(cent >= 5)
    {
        coin++;
        cent = cent - 5;
    }
    //check for penny
    while(cent >=1)
    {
        coin++;
        cent = cent - 1;
    }
    printf("%d\n", coin);
}
