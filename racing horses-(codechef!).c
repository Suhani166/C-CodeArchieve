#include<stdio.h>
//racing horses-codechef
//timelimit exceeded. Optimised approach needed
void sort(int array[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]<array[j]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,min=1000000;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,n);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((arr[i]-arr[j])<min){
                    min= arr[i]-arr[j];
                }

            }
        }
        printf("%d\n",min);
    }
    return 0;
} 