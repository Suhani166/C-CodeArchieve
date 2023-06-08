#include<stdio.h>
#include<stdlib.h>
void mergeSort(int arr[], int n);
void merge_sort_recursion(int arr[],int l,int r);
void mergeSortedArray(int arr[], int l ,int m, int r);


int main(){

    printf("Enter size of array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter values in array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,n);

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}

void mergeSort(int arr[], int n){
    merge_sort_recursion(arr,0,n-1);
}

void merge_sort_recursion(int arr[],int l,int r){

    if(l<r){
        int m = l + (r-l) /2;
        merge_sort_recursion(arr, l, m);
        merge_sort_recursion(arr, m+1 , r);

        mergeSortedArray(arr,l,m,r);
    }
    
}

void mergeSortedArray(int arr[], int l ,int m, int r){

    int left_length = m-l+1;
    int right_length = r-m;

    int temp_left[left_length];
    int temp_right[right_length];

    int i,j,k;
    for(int i=0;i<left_length;i++){
        temp_left[i] = arr[l+i];
    }

    for(int i=0;i<right_length;i++){
        temp_right[i] = arr[m+1+i];
    }

    
    for(i=0,j=0,k=l;k<=r;k++){

        if( (i<=left_length) && ( j>=right_length || temp_left[i]<=temp_right[j]) ){
            arr[k]=temp_left[i];
            i++;
        }
        else{
            arr[k]= temp_right[j];
            j++;
        }
    }
}

