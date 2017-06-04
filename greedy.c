#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
int main (void)
{
    float user_input;
    int balance;
    int count = 0;
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;
    do 
    { printf("O hai! How much change is owed?:");
    user_input=get_float();
    }
    while(user_input<0);
    balance=(int)(user_input*100);
   
    count+=balance/quarter;
    balance%=quarter;
    
    count+=balance/dime;
    balance%=dime;
    
    count+=balance/nickel;
    balance%=nickel;
    
    count+=balance/penny;
    balance%=penny;
    
    printf("%i\n",count);
    
}   
    
    
    
    
    

    
