#include<stdio.h>
int main()
{
    int n;
    int rem[32]={0};
    printf("Enter a number to be converted into binary\n");
    scanf("%d",&n);
    int i=0;
    while(n>0){
        rem[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",rem[j]);
    }

    return 0;
}