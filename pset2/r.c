       
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // TODO
    double b = GetDouble();
    float r = GetFloat();
    int n = GetInt();
    
    r = r*100;
    
    double i = (b*r*n)/100;
    double a = i+b;
    printf("\n %f \n", a);
}s