#define len 50
#define status 2
#include "myBank.h"

static double arr[50][2];

bool OP(int temp)
{

        if(temp >= 0  && temp < 50)
        {
            if(arr[temp][1] == 1 )
            {
                return true;
            }
            else
            {
                printf("This account is closed\n");
                return false;
            }

        }
        printf("Invalid account number\n");
        return false;
}

bool O()
{
    for(int i = 0 ; i < len  ; i++)
    {
        if(arr[i][1] == 0)
        {
            double temp;
            printf("Please enter amount for deposit: ");
            if( scanf("%lf" , &temp) == 1 && temp >= 0)
            {
                    arr[i][1]= 1;
                    arr[i][0] = temp;
                    printf("New account number is: %d \n" , ((i) + 901));
                    return true;
            }   
            else
            {
                printf("Failed to read the amount\n");
                return false;
            }
            
            
        }
    }
    printf("there is no account available\n");
    return false;
}

void B()
{
    int temp;
    printf("Please enter account number: ");
    if(scanf("%d" , &temp) != 0)
    {
        temp -= 901;
        if(OP(temp))
        {
            int m = temp + 901;
            printf("The balance of account number %d is: %.2lf \n" ,m ,  arr[temp][0]);
            
        }
    }
    else
    {
        printf("Failed to read the account number\n");
    }
}

void D()
{
    int temp;
    printf("Please enter account number: ");
    if(scanf("%d" , &temp) ==1)
    {
        temp -= 901;
        if(OP(temp))
        {
            double t;
            printf("Please enter the amount to deposit: ");
            if(scanf("%lf" , &t) != 0 && t > 0)
            {
                arr[temp][0] += t;
                int m = temp + 901;
                printf("The balance of account number %d is: %.2lf \n" ,m ,  arr[temp][0]);
            }
            else if(t < 0)
            {
                printf("Cannot deposit a negative amount\n");
            }
            else
            {
                printf("Failed to read the amount\n");
            }
        } 
    }
    else
    {
        printf("Failed to read the account number\n");
    }

}

void W()
{
    int temp;
    printf("Please enter account number: ");
    if(scanf("%d" , &temp) == 1)
    {
        temp -= 901;
        if(OP(temp))
        {
            double t;
            printf("Please enter the amount to withdraw: ");
            if(scanf("%lf" , &t) == 1 && t > 0)
            {
                if(arr[temp][0] - t >= 0)
                {
                    arr[temp][0] -= t;
                     int m = temp + 901;
                    printf("The balance of account number %d is: %.2lf \n" ,m ,  arr[temp][0]);
                }
                else if(t < 0)
                {
                    printf("Cannot deposit a negative amount\n");
                }
                else
                {
                    printf("Cannot withdraw more than the balance\n");
                }
            }

            else
            {
                printf("Failed to read the amount\n");
            }
        }  
    }
    else
    {
        printf("Failed to read the account number\n");
    }
}

bool C()
{
    int temp;
    printf("Please enter account number: ");
    if(scanf("%d" , &temp) != 0)
    {
        temp -= 901;
        if(OP(temp))
        {  
            arr[temp][1] = 0;
            arr[temp][0] = 0;
            temp += 901;
            printf("Closed account number %d\n" , temp);
            return true;
        }
        return false;
    }
    printf("Failed to read the account number\n");
    return false;
}

void I()
{
    double temp;
    printf("Please enter interest rate: ");
    if(scanf("%lf" , &temp) != 0)
    {
        if(temp > 0)
        {
            for(int i = 0 ; i < len ; i++)
            {
                if(arr[i][1] == 1)
                {
                    arr[i][0] += (arr[i][0]*temp * 0.01);
                }
            }
        }
        else
        {
            printf("Invalid interest rate\n");
        }
    }
    else
    {
        printf("Failed to read the interest rate\n");
    }
    
}

void P()
{
    for(int i = 0 ; i < len ; i++)
    {
        if(arr[i][1] == 1)
        {
            printf("account number - %d = %.2lf\n" , (i+901) , arr[i][0]);
        }
    } 
}

void E()
{
    for(int i = 0 ; i < len ; i++)
    {
        if(arr[i][1] == 1)
        {
            arr[i][0] = 0;
            arr[i][1] = 0;
        }
    } 
}

