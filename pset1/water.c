#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Type the number of minutes you spend in shower\n");
    int a = GetInt();           // Get the number of minutes spent in shower
    int b,c;
    b = 192*a;                  // Convert shower minutes in number of water bottel used
    c = b/16;
    printf("The number of equivelent water bottle used are = %i \n", c);
}