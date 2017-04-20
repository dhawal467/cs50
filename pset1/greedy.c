#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float i;
    do                  //Get a Positive number for amount owed
    {
        printf("Hello! How much change is owed\n");
        i = GetFloat();
    }
    while (i < 0);
    
    i = i * 100;        //Change float into integer
    double d = round(i);

    int cent = d;       
    int coins = 0;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    while (cent >= quarter)  //Count the number of coins required
    {
        coins++;
        cent = cent - quarter;
    }
    while (cent >= dime)
    {
        coins++;
        cent = cent - dime;
    }
    while (cent >= nickel)
    {
        coins++;
        cent = cent - nickel;
    }
    while (cent >= penny)
    {
        coins++;
        cent = cent - penny;
    }
    
    printf("%i\n", coins);
    return 0;
}