#include <stdio.h>
#include <cs50.h>
int main(void)
{
  
int i,j,L;

    do {
    printf("Height:");
    L=GetInt();    
    }
    while 
    ((L<0)||((L>23))); 
   
    
for (i = 0; i<L;++i){
    for (j=0; j < L; ++j){
        if      (j < L - 1 - i) printf(" ");
        else                    printf("#");
    }
        printf("#\n");
}
  
}  