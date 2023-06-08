#include<stdio.h>
#include<string.h>
//LAPINDROMES
//gaga abcba rotor etc are lapindromes
//frequency of letters on left and right side of mid element should be equal
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int l,mid;
        char s[1000];
        scanf("%s",&s);
        l= strlen(s);
        if(l%2==0){
           mid=l/2; 
        }
        else{ 
            mid=(l+1)/2;
        }
        for(int i=0;i<mid;i++){
            for(int j=mid;j<l;j++){
                if(s[i]==s[j]){ //checking if element on right side is equal to that on left
                    s[j]='0'; //if yes, we set the right hand side value to be 0
                    break;
                }
            }
        }
        
        int flag=0;
        for(int i=mid;i<l;i++){ //if the entire right side is 0 that means it is a lapindrome
            if(s[i]!='0'){
                flag=1;
            }
        }
        if(flag==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}