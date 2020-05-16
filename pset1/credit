#include<cs50.h>
#include<stdio.h>
#include<math.h>
#include<stdint.h>

//function to check the validity of card number
int validity(long long int c, int l);
int num = 0;

//for adding every other digit in luhn's algo
int sum[20];

//for multiplying every other digint with 2 and then adding it
int mult_sum[20];

//for total sum of luhn's algo
int valid = 0;
int a = 0;
int b = 0;

int main(void)
{
    long long int card_num = 0;
    card_num = get_long_long("Number: ");

    //check for amex
    if ((card_num > 340000000000000 && card_num < 349999999999999) || (card_num > 370000000000000 && card_num < 379999999999999))
    {
        if (validity(card_num, 15) % 10 == 0)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    //check for master card
    else if (card_num > 5100000000000000 && card_num < 5599999999999999)
    {
        if (validity(card_num, 16) % 10 == 0)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    //check for visa card 13 digit
    else if (card_num > 4000000000000 && card_num < 4999999999999)
    {
        if (validity(card_num, 13) % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    //check for visa 16 digit
    else if (card_num > 4000000000000000 && card_num < 4999999999999999)
    {
        if (validity(card_num, 16) % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}


int validity(long long int c, int l)
{
    //for separation every other digit
    for (int i = 0; i < l; i++)
    {
        //num will be the last digit of card number
        num = c % 10;
        c = c - num;
        //divide by 10 remove last digit from card number
        c = c / 10;
        //to check if its the last digit or second to last digit
        if (i % 2 != 0)
        {
            //if its second last digit then multiply it with 2 and then add
            mult_sum[a] = num;
            //counter for array
            a++;
        }
        else
        {
            //array for numbers which only needs to be added
            sum[b] = num;
            // counter for array
            b++;
        }
    }
    for (int j = 0; j < a; j++)
    {
        mult_sum[j] = mult_sum[j] * 2;
        int temp = 0;
        //to add the products digits
        if (mult_sum[j] > 10)
        {
            temp = mult_sum[j] % 10;
            mult_sum[j] = mult_sum[j] - temp;
            mult_sum[j] = mult_sum[j] / 10;
            mult_sum[j] = mult_sum[j] + temp;
        }
        else if (mult_sum[j] == 10)
        {
            mult_sum[j] = 1;
        }
        valid += mult_sum[j];
    }
    //to add numbers which are not multiplied by 2
    for (int k = 0; k < b; k++)
    {
        valid += sum[k];
    }
    return valid;
}
