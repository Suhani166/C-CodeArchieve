#include<stdio.h>
//Uncle johny-codechef
void sort(int array[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){ //1 4 5 2 3
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
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
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&x);
        int k=arr[x-1]; 
        sort(arr,n); 
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k){ 
                ans=i+1; 
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}