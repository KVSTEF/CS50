#include <stdio.h>
#include <cs50.h>
#include <math.h>



int main(void) 
{
    
    float total = 0;
    int cent= 0;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int left = 0;
    int coin = 0;
    
   
    do 
    {
        printf("You gave me: ");
        total = GetFloat();
    
        if(total == 0||total <= 0)
        printf("Invalid entry\n:");
    }
    while(total <= 0);

    
    cent = (int)round(total*100);


    quarter = cent / 25;
    left = cent % 25;
    

    dime = left / 10;
    left = left % 10;
    
 
    nickel = left/ 5;
    left = left % 5;
    
   
    coin = quarter + dime + nickel + left;
    
    
    printf("%d\n", coin);
    
    return 0;
}