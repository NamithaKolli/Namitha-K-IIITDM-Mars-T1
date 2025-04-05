//question 2 medium dose
//Namitha Sai Kolli
//CS24B1016
#include <stdio.h>
#include <string.h>
//Globally declaring an array containing all the symbols of morse code in order of ASCII values of symbols 
char* morse_code[] = 
{
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
    "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",  // A-Z
    ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----",  //0-9
    ".-.-.-", "--..--", "..--..", "-.-.--", "-....-", ".----.", " "  // Period(.), Comma(,), Question mark(?), Exclamation mark(!), Hyphen(-), Apostrophe('), Space between words( )
};
void decode(char* input)
{
    char* word=strtok(word,"  ")//using strtok function to separe words 
    while(word!=NULL)//when there are no words to separate the srtok function returns NULL
    {
       char*symbol=strtok(word," ");//split word into symbols 
       while(symbol!=NULL)//when there are no symbols in the word the strtok function returns function
       {
          for(int i=0;i<43;i++)//Traversing through all elements of the morse code array
          {
             if(strcmp(symbol,morse_code[i])==0)//cheching if the current symbol is matching with the element of array
             {
                if(i<26)//if it is an alphabet between A and Z
                printf("%c",'A'+i)
                else if(i<36) //if the symbol is a number between 0-9
                printf("%c",'0'+i-26);
                else if(i==36)//printing special symbols separately
                printf(".");
                else if(i==37)
                printf(",");
                else if(i==38)
                printf("?");
                else if(i==39)
                printf("!");
                else if(i==40)
                printf("-");
                else if(i==41)
                printf("'");
                else if(i==42)
                printf(" ");
                break;//exit the for loop oncde the match for symbol is found
             }
          }
          symbol(strtok(NULL," ");//from the second call strtok is callled by passing NULL 
       }
       printf(" ");After the while loop for symbols is done print space before next word
       word=strtok(NULL,"  ");//every call after the first is made by passing NULL for words too
    }
    printf("\n");
}
int main()
{
   char morse_input[500];//store the morse code sent by the rover
   printf("Enter the morse code in its general format 1.space separating symbols \n2.double spaces separating words");
   scanf("%[^\n]",morse_input);
   printf("The decoded message is \n");
   decode(morse_input);
   return 0;
}  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  


