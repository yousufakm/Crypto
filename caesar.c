#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc , string argv[]) 
{   

    if (argc!=2)
    {
        printf("not a valid key for encryption , please retry using integers\n");
        return 1;
    }
    //to convert  "key"entered by user to an integer value
    int key = atoi(argv[1]);
    printf("plaintext:");
    string original= get_string();
    printf("ciphertext:");
   
    
    //to iterate over each charecter, entered as plain text by the user
    for (int i=0,n=strlen(original);i<n;i++)
  {
        char letter = original[i];
    //to encipher "i"th charecter only if its alphabet & retain its case
    if (isalpha (letter))
    {
        if(isupper(letter))
        {
            char UpperCipher =(((letter-65)+key)%26)+65;
            printf("%c",UpperCipher);
        }
        else if(islower(letter))
        {
            char LowerCipher =(((letter-97)+key)%26)+97;
            printf("%c",LowerCipher);
        }
    }
    else
    printf("%c",letter);
   }
  printf("\n");
  
  }