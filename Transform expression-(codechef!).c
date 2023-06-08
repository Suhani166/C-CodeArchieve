#include<stdio.h>
#include<string.h>
#define max 400
//Transform expression
//incomplete
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char exp[max];
        scanf("%s",&exp);
        int l=strlen(exp);
        for(int i=0;i<l;i++){
            if(exp[i]=='('|| exp[i]==')'){
                int j=i;
                while(j<l){
                    exp[j]=exp[j+1];
                    j++;
                }
            }
                
        }
        printf("%s",exp);
    }
    return 0;
}