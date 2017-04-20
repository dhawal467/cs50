#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    if (argc != 2)
    {
        
        printf("Usage: ./devigenere <keyword>\n");
        return 1;
            
    }
    
    for (int u = 0, y = strlen(argv[1]); u < y; u++)
    {
        if (isdigit(argv[1][u]))
        {
             printf("Usage: ./devigenere <keyword>\n");
             return 1;
        }
    }
    
        
    string k = argv[1];
    string a = GetString();
    int s = strlen(k);
    int x = 0;
    for (int b = 0, n = strlen(a); b < n; b++)
    {
        
        
        int d = a[b];
        int m = x % s;
        
        if (d > 96 && d < 123)
        {
            x++;
            if (k[m] > 96 && k[m] < 123)
            {
                for (int e = 97; e < k[m]; e++)
                {
                    d++;
                    
                    if (d > 122)
                    {
                        d = 97;
                    }
                }
            }
            else
            {
                for (int e = 65; e < k[m]; e++)
                {
                    d++;
                    
                    if (d > 122)
                    {
                        d = 97;
                    }
                }
            }

        }
        else if (d > 64 && d < 91)
        {
            x++;
            if (k[m] > 96 && k[m] < 123)
            {
            
                for (int e = 97; e < k[m]; e++)
                {
                    d++;
            
                    if (d > 90)
                    {
                        d = 65;
                    }
                }
            }
            else
            {
                for (int e = 65; e < k[m]; e++)
                {
                    d++;
                    
                    if (d > 90)
                    {
                        d = 65;
                    }
                }
            }
        }
        
        printf("%c", d);
    }
    
    printf("\n");
    
    
    
}