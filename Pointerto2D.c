#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int arr[n][n];

    printf("Enter elements in the array: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }

    printf("\n\nThe array is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}