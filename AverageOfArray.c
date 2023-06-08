#include<stdio.h>
int main()
{
    int n;
    double sum=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("The average of the values of array is : %.1f",(sum/n));

    return 0;
}