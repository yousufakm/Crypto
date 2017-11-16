#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) 
{   
    string user_name = GetString();
    if (user_name !=NULL)
    //to capitalize the first letter of the first name entered by the user
    printf("%c", toupper(user_name[0]));
    //to capitalize any subsequent names entered by user, the loop to ignore first name
    //and to start after a space and print the first letter of subsequent names.
    for(int i = 0, n = strlen(user_name); i < n; i++) 
    {
        if(user_name[i] == ' ')
        {
         printf("%c", toupper(user_name[i+1]));
        }
    }
   printf("\n");
}