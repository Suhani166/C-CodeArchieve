#include<stdio.h>
//tcs examination long 2 question codechef
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int drag[3];
        int slo[3];
        for(int i=0;i<3;i++){
            scanf("%d",&drag[i]);
        }
        for(int i=0;i<3;i++){
            scanf("%d",&slo[i]);
        }
        int sum1,sum2;
        sum1= drag[0]+drag[1]+drag[2];
        sum2= slo[0]+slo[1]+slo[2];
        if(drag[0]==slo[0] && drag[1]==drag[1] && drag[2]==slo[2]){
            printf("Tie\n");
        }
        else if(sum1>sum2){
            printf("Dragon\n");
        }
        else if(sum2>sum1){
            printf("Sloth\n");
        }
        else if(sum1==sum2){
            if(drag[0]>slo[0]){
                printf("Dragon\n");
            }
            else if(drag[0]<slo[0]){
                printf("Sloth\n");
            }
            else if(drag[0]==slo[0]){
                if(drag[1]>slo[1]){
                    printf("Dragon\n");
                }
                else{
                    printf("Sloth\n");
                }
            }
        }
        
    }
    return 0;
}