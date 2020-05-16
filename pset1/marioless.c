#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;                     //initialize height
    int i, j, k;                        //initialize loop counter
    int c = 0;                          //initialize counter for hash sign
    while (height < 1 || height > 8)    //to validate user input
    {
        height = get_int("Height: ");   //prompt user to enter height of pyramid
    }
    for (i = height; i > 0; i--)        //loop for next line
    {
        c = c + 1;
        for (j = 0;j < i - 1; j++)      //loop for spaces
        {
            printf(" ");
        }
        for (k = c;k > 0;k--)           //loop to print hash sign
        {
            printf("#");
        }
        printf("\n");
    }
}
