#include<stdio.h>
void revarr(int array[],int n){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp = array[i];
        array[i]=array[n-i-1]; 
        array[n-i-1]=temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Input values in array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Original array is :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The Reversed array is :\n");
    revarr(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}