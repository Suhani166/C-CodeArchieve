#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,d;
        scanf("%lld %lld",&n,&d);
        long long ans=1;
        for(int i=1;i<=d;i++){
            if(i<=10){
                ans=ans*2; 
            }
            else{
                ans=ans*3;
            } 
            if(ans>n){
                ans=n;
                break;
            }
            
        }
        printf("%lld\n",ans); 
    }
    return 0;
}