#include <stdio.h>
#include <cs50.h>
#include <math.h>

//change sorter for coin dispencer
//main issue is related to the computer being unable to save
//floats precisely due to how floats are saved in binary
// for some reason the floats are pretty far off too compensate for this issue
// I have added another 1 to the formula to account for inaccurate results
// numbers that don't play well .02 / .05 / .09 / .08

int main(void)

{
    double j = get_float("Enter a amount to exchange: ");
    printf("%f\n", j);
    int i = j * 100;
    if ()
    printf("%d\n", i);
    int  total_coins_count = 0;
    int remaind = 0;
    int left_over = 0;

    if (i / 25 && i > 0)

    {
        int quart_coins =(int)floor(i / 25);
        printf("%d quart coins \n", quart_coins);
        left_over = quart_coins * 25;
        remaind = i - left_over;
        printf("%d quart remaind \n", remaind);
        total_coins_count = quart_coins + total_coins_count;
        printf("%d total \n", total_coins_count);
    }

    if(remaind != 0)

    {
        int dime_coins = (int)floor(remaind / 10);
        printf("%d dime coins \n", dime_coins);
        left_over = dime_coins * 10;
        remaind = remaind - left_over;
        printf("%d dime remaind \n", remaind);
        total_coins_count = dime_coins + total_coins_count;
    }

    if(remaind != 0)

    {
        int nickel_coins = (int)floor(remaind / 5);
        printf("%d nickel coins \n", nickel_coins);
        left_over = nickel_coins * 5;
        remaind = remaind - left_over;
        printf("%d nickel remain \n", remaind);
        total_coins_count = nickel_coins + total_coins_count;
    }

    if(remaind != 0)

    {
        int penny_coins = (int)floor(remaind / 1);
        printf("%d penny coins \n", penny_coins);
        left_over = penny_coins * 1;
        remaind = remaind - left_over;
        printf("%d penny remain \n", remaind);
        total_coins_count = penny_coins + total_coins_count;
    }

    printf("%d total \n", total_coins_count);
}


//printf("%d total \n", total_coins_count);
//printf("%f remain \n", remaind);
//printf("%f\n", d);
//double test = .10 / .10;
//printf("%f Test \n", test);
//printf("%d total \n", total_coins_count);
//printf("%f remain \n", remaind);
//printf("%f\n", d);
//double test = .10 / .10;
//printf("%f Test \n", test);
//int dime_coinss = remaind / d;
//printf("%d dime \n", dime_coins);
//double q = .25;
//double d = .10;
//int n = .05;
//int p = .01;