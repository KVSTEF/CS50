#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

 int main(int argc, string argv[])
 {
    
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }
    
    // check entry
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Invalid entry\n");
            return 1;
        }
    }
    
   
    string word = GetString();
    int j = 0;
    
    for (int i = 0, n = strlen(word); i < n; i++)
    {

        j = j % strlen(argv[1]);
        
        if (isalpha(word[i]))
        {
    
            if (islower(word[i]) && islower(argv[1][j]))
                printf("%c", (((word[i] - 97) + (argv[1][j] - 97)) % 26) + 97);
            else if (isupper(word[i]) && islower(argv[1][j]))
                printf("%c", (((word[i] - 65) + (argv[1][j] - 97)) % 26) + 65);
            else if (islower(word[i]) && isupper(argv[1][j]))
                printf("%c", (((word[i] - 97) + (argv[1][j] - 65)) % 26) + 97);
            else if (isupper(word[i]) && isupper(argv[1][j]))
                printf("%c", (((word[i] - 65) + (argv[1][j] - 65)) % 26) + 65);
            j++;
        }
        else
        {
            printf("%c", word[i]);
        }
    }
    printf("\n");
 }