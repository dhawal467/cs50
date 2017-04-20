#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
   
   string s = GetString();
   int i = strlen(s);
   if (s != NULL)
   {
      if (s[0] > 96)
         {
            int d = s[0] - 32;
            printf("%c", d);
         }
         else
         printf("%c", s[0]);
         for(int g=0; g <= i; g++)
         {
            if (s[g] == ' ')
            {
               if (s[g+1] > 96)
               {
                  int h = s[g+1] - 32;
                  printf("%c", h);
               }
               else
               printf("%c", s[g+1]);
            }
         }
   }
   printf("\n");
   return 0;
}