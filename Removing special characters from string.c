//Removing special characters from string
#include<stdio.h>
#include<string.h>
//Write a C program to remove special characters and digits
//leaving the alphabets un altered in a given string.
int main()
{
    char st[100],temp[100];
    int k=0;
    printf("Enter a string\n");
    scanf("%s",&st);
    int n=strlen(st);
    for(int i=0;i<n;i++){
        if( (st[i]>='A' && st[i]<='Z') || (st[i]>='a' && st[i]<='z') ){
            temp[k]=st[i];
            k++;
        }
    }
    temp[k]='\0'; 
    printf("Modified string : %s",temp);
    return 0;
}