#include<stdio.h>
#include<string.h>
#define max 100000
//we are checking for the smallest prime numbers 2 and 3 if they are present on the substring or not
//binary rep of 2 and 3 is 10 and 11

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char st[max];
        scanf("%s",&st);
        int flag=0;
        for(int i=0;i<strlen(st);i++){
            if(st[i]=='1'&& (st[i+1]=='1' || st[i+1]=='0')){ 
                flag=1;
                printf("YES\n");
                break;
            }
        }
        if(flag==0){
            printf("NO\n");
        }
        
    }
    return 0;
}