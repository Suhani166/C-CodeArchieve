#include<stdio.h>
void sort(int arr[], int n){ //sorting in decreasing order
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d %d",&n,&x); 
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]); 
        }
        int sum=0,count=0,flag=0;
        for(int i=0;i<n;i++){ 
            sum+=arr[i]; 
        }
        if(sum<x){  //checking if there are enough coins in the FD or not.
            flag=1; //EG:- arr[3]=1 5 3 x=15 so the total coins in array is sum=9<15
        }
        int sum1=0;
        sort(arr,n);//sorted array in descending order
        for(int i=0;i<n;i++){ //traversing the array and adding the values
            sum1+=arr[i];
            count++;
            if(sum1>=x){ 
                break;
            }
        }
        if(flag==1){
            printf("-1\n");
        }
        else{
            printf("%d\n",count);
        }
    }
    return 0;
}