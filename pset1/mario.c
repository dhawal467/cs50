#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int a;
    do                                  //Get a positive number not greater than 23
    {
        printf("Height\n");
        a = GetInt();
        while (a < 0)
        {
            printf("retry\n");
            a = GetInt();
        }
       
    }
    while (a >= 24);

    int b;
    
    for ( b = a; b > 0; b--)            //Loop for getting new line
    {
        
        for(int k = b-1; k > 0; k--)    //Loop for getting space character
        {
            
            
            printf(" ");
            
        }
        for(int d = a+2; d > b; d--)    //Loop for printing "#"
        {
        
            string c="#" ;
            printf("%s", c);
        
        } 
    printf("\n");
    }

return 0;
}