#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values in array : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int first, last, mid, key, index, flag=0;
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    printf("\n");
    first=0;
    last=(n-1);
    while(first<=last){
        mid= (first+last)/2;
        if(arr[mid]==key){
            flag=1;
            index=mid;
            break;
        }
        if(arr[mid]<key){
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    if(flag==1){
        printf("\n%d found at %d index\n",key,index);
    }
    else{
        printf("%d not found :( // Try again!!\n",key);
    }
    return 0;
}