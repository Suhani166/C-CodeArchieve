#include<stdio.h>
int main()
{
    int i=0,count=0;
    //Counting the letters in string
    char st[]="skjesjfiergog";
    while(st[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}