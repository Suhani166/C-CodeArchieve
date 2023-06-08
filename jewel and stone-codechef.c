#include<stdio.h>
#include<string.h>
#define max 100
//Incomplete code(recheck)
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char J[max],S[max];
        scanf("%s",&J);
        scanf("%s",&S);
        int l1= strlen(J);
        int l2= strlen(S);
        int count=0;
        if((l1==1 ||l2==1) && S[0]==J[0]){
            printf("%d\n",count+1);
            break;
        }
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(J[i]==S[j]){
                    count++;
                }
            }
        }
        printf("%d\n",count);

    }
    return 0;
}