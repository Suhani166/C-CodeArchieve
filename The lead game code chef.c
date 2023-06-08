#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int arr1[n],arr2[n];
    int k=0;
    while(temp--){
        int si,ti;
        printf("Enter the values\n");
        scanf("%d %d",&si,&ti);
        arr1[k]=si;
        arr2[k]=ti;
        k++;
    }
    for(int i=1;i<n;i++){
        arr1[i]=arr1[i]+arr1[i-1];
        arr2[i]=arr2[i]+arr2[i-1];
    }
    int max=0;
    int winner=1;
    for(int i=0;i<n;i++){
        int cur_max=arr1[i]-arr2[i];
        if(abs(cur_max)>max){
            max=abs(cur_max) ;
            if(cur_max<0)
            winner=2;
            else
            winner=1;
        }
    }
    printf("%d %d\n",winner,max);
    return 0;
}