#include<stdio.h>
int main()
{
    int n,key,flag=0,pos;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Input the values of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched :\n");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1){
        printf("Element Found! The index of the element is : %d\n",pos);
    }
    else{
        printf("Element not found.Try Again!\n");
    }
    return 0;
}