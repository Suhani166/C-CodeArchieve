#include<stdio.h>
#include<string.h>
#define max 100
/*
Programming
rogrammin
ogrammi
gramm
ram
a*/
int main()
{
    char str[max]; int n;
    printf("Enter a string : ");
    scanf("%s",&str);
    int len= strlen(str);
    printf("\nEnter the number of rows : ");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<=n;i++){
        for(int j=i;j<=len-1-i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}