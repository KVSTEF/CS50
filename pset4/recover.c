/**
 * Konstantin Stefanenko
 * CS 50
 * pset4    
 * resize.c
 */


#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(void)
{   
    FILE* file = fopen("card.raw", "r");                                //open raw file
    
    if (file == NULL)                                                   //check file
    {
        fclose(file); 
        printf("unable to recover file from card.raw \n");
        return 1;
    }

    int count = 0;                                                      //counter 
   
    BYTE buffer[512];                                                   //buffer of 512 bytes
   
    
    char lname[10];                                                     //three-digit decimal number
   

    FILE* temp = NULL;                                                  //temp file output 
    
    
    
   
    while (!feof(file))                                                 // until end of file
    {
       
                                                                        // check first couple of sequence of the jpg
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xe0 || buffer[3] == 0xe1))
        {
           
            if (temp != NULL)
            {
                fclose(temp);
                
            }
            
           
            sprintf(lname, "%03d.jpg", count);                          //create file
            
                                                                        // next file in line
            temp = fopen(lname, "w");
            
                                                                        // increment counter
            count++;
            
                                                                        // new file with buffer
            fwrite(buffer, sizeof(buffer), 1, temp);
        }
        else if (count > 0)
        {
                                                                         // put jpg into temp
            fwrite(buffer, sizeof(buffer), 1, temp);            
            
        }
      
        fread(buffer, sizeof(buffer), 1, file);
        
    }
  
    =
    fclose(file);

    return 0;
}