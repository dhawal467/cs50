#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("usage : ./caesar + key \n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    string a = GetString();
    
    for (int b = 0, c = strlen(a); b < c; b++)
    {
        
        int d = a[b];
        
        if (d > 96 && d < 123)
        {
            for (int e = 0; e < k; e++)
            {
                d++;
                if (d > 122)
                {
                    d = 97;
                }
            }
        }
        else if (d > 64 && d < 91)
        {
            for (int e = 0; e < k; e++)
            {
                d++;
                if (d > 90)
                {
                    d = 65;
                }
            }
        }
        printf("%c", d);
    }
    printf("\n");
    
}