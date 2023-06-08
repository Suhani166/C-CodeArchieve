//Write a C program to read a sentence and replace all the
//alphabets in the input sentence with ‘#’ whose ASCII value is even
//and with ‘%’, whose ASCII value is odd. Display the resultant
//sentence.
#include<stdio.h>
#include<string.h>
int main()
{
    char sent[100];
    printf("Enter a sentence : ");
    scanf("%s",&sent);
    int n=strlen(sent);
    for(int i=0;i<n;i++){
        if((int)sent[i]%2==0){
            sent[i]='#';
        }
        else{
            sent[i]='%';
        }
    }
    printf("\nThe modified string is : %s\n",sent);
    return 0;
}