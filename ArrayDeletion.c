#include<stdio.h>
int main()
{
    int n,index;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The original array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    //DELETION
    printf("\nEnter the index of the value to be deleted\n");
    scanf("%d",&index);
    for(int i=index;i<n;i++){ //Shifting values to the left
        arr[i]=arr[i+1]; 
    }
    n--;
    printf("Array after deletion:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}