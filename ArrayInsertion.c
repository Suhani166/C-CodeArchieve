#include<stdio.h>
int main()
{
    int n,ele,pos;
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
    } 
    printf("\n");
    printf("Enter the value and position of the element to be inserted\n");
    scanf("%d %d",&ele,&pos);
    //insertion
    for(int i=n;i>=pos;i--){ 
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    n++;
    printf("Array after insertion of new element:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}