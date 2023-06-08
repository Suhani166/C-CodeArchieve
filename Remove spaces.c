//Removing spaces from the string
#include<stdio.h>
#include<string.h>
int main(){
    const int max=100;
    char st[max],new_st[max];
    printf("Enter the string :\n");
    gets(st);
    int i=0,j=0;
    while(st[i]!='\0'){
        if(st[i]!=' '){
            new_st[j++]=st[i];
        }
        i++;
    }
    new_st[j]='\0';

    printf("The modified string is : %s",new_st);
    return 0;
}