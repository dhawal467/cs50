/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(int argc, char* argv[])
{
    // TODO
    
    // open card file
    FILE* card = fopen("card.raw", "r");
    if (card == NULL)
    {
        printf("Could not open %s.\n", "card.raw");
        return 1;
    }
    
    // Define Buffer
    typedef uint8_t  BYTE;
    BYTE buffer[512];
    int count = 0;
    FILE* img = NULL;
    char outptr[8];
    int num = 0;
    
    
    // loop start
    while (fread(&buffer, sizeof(buffer), 1, card) == 1)
    
    {
        
        
        // check for jpeg signature
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xe0 || buffer[3] == 0xe1 || buffer[3] == 0xe2 || buffer[3] == 0xe3 || buffer[3] == 0xe4 || buffer[3] == 0xe5 || buffer[3] == 0xe6 || buffer[3] == 0xe7 || buffer[3] == 0xe8 || buffer[3] == 0xe9 || buffer[3] == 0xea || buffer[3] == 0xeb || buffer[3] == 0xec || buffer[3] == 0xed || buffer[3] == 0xee || buffer[3] == 0xef))

        {   
            if (count > 0)
            {
                fclose(img);
                
                count = 0;
            }
            count++;
            sprintf(outptr, "%03d.jpg", num); 
            img = fopen(outptr, "a");

            fwrite(&buffer, 512, 1, img);
            num++;
            
            
            
        }
        else
        {
            if (count > 0)
            {
                fwrite(&buffer, 512, 1, img);
            }
            
        }
    }
    fclose(img);
}
