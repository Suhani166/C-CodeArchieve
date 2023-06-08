#include<stdio.h>
int main()
{
    int n;
    printf("Enter element to be converted\n");
    scanf("%d",&n);
    char rem[32];
    int i=0;
    while(n>0){
        int temp=0;
        temp=n%16;
        if(temp<10){
            rem[i]= (char)(temp+48);
            i++;
        }
        else{
            rem[i]=(char)(temp+55);
            i++;
        }
        n=n/16;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",rem[j]);
    }
    return 0;
}