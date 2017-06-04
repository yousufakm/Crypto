#include <stdio.h>
#include <cs50.h>
int main(void)

{
    int height,row,hash,space;
    
    {printf("height should be between 1 and 23\n");}
    do{printf("height:");
    height=get_int();
    } while(height<0||height>23);
    
    for(row=0;row<height;row++)
    {
        for(space=0;space<=height-row-2;space++)
        {
        printf(" ");
        }
        for(hash=0;hash<row+2;hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    
}