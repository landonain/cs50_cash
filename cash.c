#include <stdio.h>
#include <cs50.h>
#include <math.h>

//change sorter for coin dispencer
int main(void)
{
    double q = .25;
    double d = .10;
    //int n = .05;
    //int p = .01;

    double  i = get_float("Enter a amount to exchange: ");
    //printf("%f\n", i);
    int  total_coins_count = 0;
    double remaind = 0;

    if (i / q && i > 0)
    {
        int quart_coins =(int)floor(i / q);
        //printf("%f\n", quart_coins);
        double left_over = quart_coins * q;
        remaind = i - left_over;
        //printf("%f\n", remaind);
        total_coins_count = quart_coins + total_coins_count;
        //printf("%d\n", total_coins_count);

        if(remaind != 0)
        {
            printf("%f\n", remaind);
            printf("%f\n", d);
            int dime_coins = (int)floor(remaind / d);
            int dime_coinss = remaind / d;
            printf("%d\n", dime_coinss);
            printf("%d\n", dime_coins);
            left_over = dime_coins * d;
            double new_remaind = remaind - left_over;
            printf("%f\n", new_remaind);
            total_coins_count = dime_coins + total_coins_count;
        }
    }
    printf("%d\n", total_coins_count);
}

