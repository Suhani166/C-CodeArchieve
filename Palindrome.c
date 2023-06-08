#include<stdio.h>
int main()
{
    //check if string is palindrome or not
    printf("Enter the size of string\n");
    int n,flag=0;
    scanf("%d",&n);
    char st[n];
    printf("Enter the string\n");
    scanf("%s",&st);
    //Checking for palindrome
    for(int i=0;i<n/2;i++){ //madam
        if(st[i]!=st[n-1-i]){//st[0]!=st[5-1-0] //st[1]!=st[5-1-1]
            flag=1;           // m         m          a       a
            break;
        }
    }
    if(flag==0){
        printf("It is a Palindrome!!\n");
    }
    else
    printf("It is not a Palindrome string.\n");
    return 0;
}