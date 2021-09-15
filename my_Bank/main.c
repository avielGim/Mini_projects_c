#include <stdio.h>
#include <stdbool.h>
#include "myBank.c"

int main()
{
    
    bool flag = true;
    while(flag)
    {
        
        printf("Please choose a transaction type:\n");
        printf("O-Open Account\n");
        printf("B-Balance Inquiry\n");
        printf("D-Deposit \n");
        printf("W-Withdrawal\n");
        printf("C-Close Account \n");
        printf("I-Interest \n");
        printf("P-Print \n");
        printf("E-Exit \n");
        char t ;     
        if(scanf(" %c" , &t) == 1)
        {
            if(t == 'O'){ O();}
            else if(t == 'B'){ B();}
            else if(t== 'D'){ D();}
            else if(t == 'W'){ W();}
            else if(t == 'C'){ C();}
            else if(t == 'I'){ I();}
            else if(t == 'P'){ P();}
            else if(t == 'E')
            { 
                E();
                flag = false;
            }
            else
            {
                printf("Invalid transaction type\n");
            }
            
        }
        else
        {
            printf("Invalid transaction type\n");
        }
        printf("\n");
    }

    return 0;
}
