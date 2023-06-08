#include<stdio.h>
#include<string.h>
//Second and optimised approach for lapindrome
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char st[1000];
        scanf("%s",&st);
        int arr1[26]={0};
        int arr2[26]={0};
        int len,mid,a;
        char c;
        len=strlen(st);
        mid=len/2;
        for(int i=0;i<mid;i++){
            c=st[i];
            a =c-97;
            arr1[a]++;
        }
        if(len%2!=0){
            mid++;
        }
        //checking right side
        for(int i=mid;i<len;i++){
            c=st[i];
            a=c-97;
            arr2[a]++;
        }
        //comparing if both arrays are equal
        int flag=0;
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                flag=1;
                break;
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