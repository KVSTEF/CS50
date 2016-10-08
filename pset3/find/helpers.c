/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{

    for (int i = 0; i < n; i++)                 //   linear search
                if (values[i] == value)
                    return true;

    return false;
}

//  Sorts array of n values.

void sort(int values[], int n)
{
    // Bubble sort
   bool swap;
   
    do                                              //while the array is not sorted (swap = false)
    {   swap = false;
        for (int i = 0; i < (n-1); i++) 
            {
            if (values[i] > values[i+1])            //We compare adjacent elements
                {                                   // If true rearrange them and set trigger on true 
                 int temp = values[i];
                 values[i] = values[i+1];
                 values[i+1] = temp;
                 swap = true;
                }
            }
    } while (swap);
    
    return;
}