#include<stdio.h>
int main()
{
    int n;
    printf("Enter number to be converted\n");
    scanf("%d",&n);
    int rem[32];
    int i=0;
    while(n>0){
        rem[i]=n%8;
        i++;
        n=n/8;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",rem[j]);
    }
    return 0;
}