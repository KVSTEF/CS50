#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
                        
int main(int argc, string argv[])
{
    bool Success = false;
    int key = 0;
    string text = "";
    
    // input
    do
    {
     
        if(argc != 2)
        {
            
            printf("Check your input and re-run the programm.\n");
            return 1;
        }
        else
        {
          
            key = atoi(argv[1]);
            Success = true;
        }
    } while(!Success);
    
    
     text = GetString();
   
    for(int i = 0; i < strlen(text); i++)
    {
     
        if(isalpha(text[i]))
        {
            
            if(islower(text[i]))
            {
                printf("%c", ((((text[i] - 97)+key)%26)+97));
            }
           
            else
            {
                printf("%c", ((((text[i] - 65)+key)%26)+65));
            }
        }
       
        else
        {
            printf("%c", text[i]);
        }
    }
  
     
    printf("\n");
     return 0;  
    
         
}