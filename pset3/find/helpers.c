/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
   
    if(n >= 0)
    {
        for(int i = 0; i < n+1; i++)
        {
            if(value == values[i])
            {
                return true;
            }
        }
        return false;
    }
    else
    {
        return false;
    }
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int x = 0;
    for (int a = 0; a < n; a++)
    {
        
        if (((a+1)==n) && (x != 0))
        {
            a = 0;
            x = 0;
        }
        
        if (values[n] > values[n+1])
        {
            int b = values[n];
            values[n] = values[n+1];
            values[n+1] = b;
            x++;
        }
        
    
    printf("\n %i", values[n]);    
    }
    
    return;
}