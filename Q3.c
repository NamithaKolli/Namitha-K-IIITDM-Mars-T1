//medium Dose question 3
//CS24B1016 //Namitha Sai Kolli
#include <stdio.h>
#include <stdlib.h>
//char* alphabets[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}
void decode(char* input)
{
       int i=0,j=1;
    
     while(input[i]!='\0')
     {
     if(input[i]==' ')
     {
         i++;
         continue; 
     }
     
     if(input[i]>='a' && input[i]<='z')
     {
         input[i]-=32;//converting lower case letters to upper case
     }
     input[i]=input[i]-j;
     if(input[i]<'A')//Handling the case where the character goes less than A
     {
         input[i]=input[i]+26;
     }
     j++;
     i++;
     }
    printf("The decoded message is\n");
    printf("%s",input);
    printf("\n");
}
int main()
{
   char encrypted_input[500];
   printf("Enter the Input of encrypted message sent by the rover:  ");
   scanf("%[^\n]",encrypted_input);
   decode(encrypted_input);
}
