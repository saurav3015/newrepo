#include<stdio.h>
int main () {
    for (int i = 1 ; i <= 4; i++)
    {
        for (int a = 1 ; a <= 6 ; a ++)
        {
            if (i == 1 || a == 1 || i ==4 || a == 6)
            {
              printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        
       printf("\n");
    }
    
    return 0 ;
}