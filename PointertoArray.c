#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int arr[n];
    int *parr;
    parr=arr; //pointer points to the 0th address right now
    printf("Enter elements in the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",(parr+i));
    }
    printf("The value at 0th index is : %d\n",*parr);
    parr++; //parr value incremented so now it points to the next index of array
    printf("The value at 1st index is : %d\n",*parr);
    parr--; //parr now points to the 0th index again 
    //since we are printing the entire array we need parr to point to the 0th index else it would
    //start printing from 1st index
    printf("\n\nThe array is: \n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(parr+i));
    }

    return 0;
}