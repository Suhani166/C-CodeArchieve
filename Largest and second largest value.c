#include<stdio.h>
int main()
{
    int n,l1=0,l2=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The original array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    } printf("\n");
    
    for(int i=0;i<n;i++){
        if(arr[i]>=l1){
            l2=l1;
            l1=arr[i];
        }
        else if(arr[i]>=l2){
            l2=arr[i];
        }
    }
    printf("The largest value in array is : %d\nThe second largest value in array is :%d",l1,l2);
    
    return 0;
}