#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    char str[n];
    printf("Enter the sentence: \n");
    fflush(stdin);
    fgets(str,n,stdin);
    printf("The sentence is: %s\n",str);
   
    return 0;
}