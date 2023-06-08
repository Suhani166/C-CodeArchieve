#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,k,n;
        scanf("%d %d %d %d",&x,&y,&k,&n);
        int p[n],c[n];
        int flag=0;
        for(int i=0;i<n;i++){
            scanf("%d %d",&p[i],&c[i]);
        }
        for(int i=0;i<n;i++){
            if(((y+p[i])>=x) && (c[i]<=k)){
                flag=1;
                break;
            } 
        }
        if(flag==1){
            printf("LuckyChef\n");
        }
        else{
            printf("UnluckyChef\n");
        }
    }
    return 0;
}