#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int CipherKey(int AlphaKey , string key);
int main(int argc , string argv[]) 
{   
    // to perform primary check as to enter CLA matches two countswe
    if (argc!=2 )
    {
        printf("not a valid key for encryption , please retry using cipher\n");
        return 1;
    }
    //to perform secondary check to verify entered key is composed of alphabets
    string key = argv[1];
    
    for(int i=0,limit=strlen(key);i<limit;i++)
    {
        if(!isalpha(key[i]))
      {
        printf("not a valid key for encryption , please retry using alphabets\n");
        return 1;
      }
    }
    printf("plaintext:");
    string original= get_string();
    printf("ciphertext:");
    
    int AlphaKey=0;
    
    //to iterate over each charecter, entered as plain text by the user
    for (int i=0,n=strlen(original);i<n;i++)
   {
        
        char letter = original[i];
        //to encipher "i"th charecter only if its alphabet & retain its case
    
        if(isupper(letter))
        {
            char UpperCipher =(((letter-65)+CipherKey(AlphaKey,key))%26)+65;
            printf("%c",UpperCipher);
            AlphaKey++;
        }
        else if(islower(letter))
        {
            char LowerCipher =(((letter-97)+CipherKey(AlphaKey,key))%26)+97;
            printf("%c",LowerCipher);
            AlphaKey++;
        }
    
        else
        printf("%c",letter);
    }
  printf("\n");
  
}
  // to iterate over the "main key" and create a function to return the index of each charecter.
  int CipherKey(int AlphaKey , string key)
  {
      int keylength=strlen(key);
      return tolower(key[(AlphaKey%keylength)])-97 ;
  }
  
  
  