#include<stdio.h>
#include<ctype.h>
//getchar() and putchar() are in stdio header file
//ctype header file includes many functions which return nonzero value for true and 0 for false
//More functions in ctype header are: isalnum()-to check if the value is an alphabet or a digit
//iscntrl()- to check whether the character passed is a control character or not. 
//control charcters are \n \t etc which cannot be printed on screen
//isspace(),isupper(),islower(),toupper(),tolower()
//ispunct()-to check if it is a punctuation
int main()
{
    char ch;
    printf("Enter a character:");
    ch=getchar();
    printf("\nThe character is:");
    putchar(ch);
    int alpha= isalpha(ch);
    int digit= isdigit(ch);
    int lower= islower(ch);
    printf("\nNon zero number implies true and zero means it is false!\n");
    printf("\nThe character is an alphabet: %d\nThe character is a digit: %d\nThe character is in lowercase:%d\n",alpha,digit,lower);
    printf("The character in uppercase: %c\n",toupper(ch));
    return 0;
}