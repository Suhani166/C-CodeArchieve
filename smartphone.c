#include<stdio.h>
//SMARTPHONE
/*You are developing a smartphone app.
You have a list of potential customers for your app. Each customer has a budget 
and will buy the app at your declared price if and only if the price
is less than or equal to the customer's budget.*/
//N=4 array= 30 20 53 14 answer= 60
void sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int budget[n];
    for(int i=0;i<n;i++){
        scanf("%d",&budget[i]);
    }
    sort(budget,n);
    int prod,max=0;
    for(int i=0;i<n;i++){
        prod = budget[i]*(n-i);
        if(prod>max){
            max=prod;
        }
    }
    printf("%d",max);

    return 0;
}