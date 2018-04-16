#include <stdio.h>
#include <cs50.h>
#include <math.h>

//change sorter for coin dispencer
int main(void)
{
    double q = .25;
    //double d = .10;
    //int n = .05;
    //int p = .01;

    double  i = get_float("Enter a amount to exchange: ");

    //printf("%f\n", i);
    int  total_coins_count = 0;
    int remaind = 0;

    if (i / q && i > 0)
    {
        int quart_coins =(int)floor(i / q);
        printf("%d\n", quart_coins);
        int left_over = quart_coins * q;
        remaind = i - left_over;
        printf("%d\n", remaind);
        total_coins_count = quart_coins + total_coins_count;
        printf("%d\n", total_coins_count);
    }
    if(remaind != 0)
    {
        //printf("%d total \n", total_coins_count);
        //printf("%f remain \n", remaind);
        //printf("%f\n", d);
        double test = .10 / .10;
        printf("%f Test \n", test);
        double dime_coins = (double)floor(remaind / .10);
        //int dime_coinss = remaind / d;
        printf("%g\n", dime_coins);
        //printf("%d dime \n", dime_coins);
        double new_left_over = dime_coins * .10;
        double new_remaind = remaind - new_left_over;
        printf("%f new remain \n", new_remaind);
        total_coins_count = dime_coins + total_coins_count;
    }
    //printf("%d\n", total_coins_count);
}

