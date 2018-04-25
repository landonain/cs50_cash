#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

//change sorter for coin dispencer
//main issue is related to the computer being unable to save
//floats precisely due to how floats are saved in binary
// for some reason the floats are pretty far off too compensate for this issue
// I have added another 1 to the formula to account for inaccurate results
// numbers that don't play well .02 / .05 / .09 / .08
// The key to solving this is the rounding function that evens out the floating point numbers


int main(void)

{
    double j = get_float("Enter a amount to exchange: ");
    //The float is converted into an int and rounded to deal with imprecise numbers
    int i = round(j * 100);
    // setting my global values
    int  total_coins_count = 0;
    int remaind = 0;
    int left_over = 0;

    if (i / 25 && i > 0)

    {
        int quart_coins =(int)round(i / 25);
        left_over = quart_coins * 25;
        remaind = i - left_over;
        total_coins_count = quart_coins + total_coins_count;
    }

    if(i / 10 || remaind != 0)

    {
        //  This second if is for when the input from the user drops below 25 cents
        if (remaind == 0 && i / 10)
        {
            remaind = i;
        }
        int dime_coins = (int)round(remaind / 10);
        left_over = dime_coins * 10;
        remaind = remaind - left_over;
        total_coins_count = dime_coins + total_coins_count;
    }

    if(i / 5 || remaind != 0)

    {
        if (remaind == 0 && i / 5)
        {
            remaind = i;
        }
        int nickel_coins = (int)round(remaind / 5);
        left_over = nickel_coins * 5;
        remaind = remaind - left_over;
        total_coins_count = nickel_coins + total_coins_count;
    }

    if(i < 5 || remaind < 5)

    {
        if (remaind == 0 && i / 1)
        {
            remaind = i;
        }
        int penny_coins = (int)round(remaind / 1);
        left_over = penny_coins * 1;
        remaind = remaind - left_over;
        total_coins_count = penny_coins + total_coins_count;
    }

    printf("%d\n", total_coins_count);
}