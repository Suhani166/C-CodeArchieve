#include<stdio.h>
//Exchanging values of primary and secondary diagonal
int main()
{
    int n;
    printf("Enter the size of matrix\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements in the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                int temp=arr[i][j];
                arr[i][j]=arr[i][n-i-1];// exchanging with secondary diagonal value
                arr[i][n-i-1]=temp;
            }
        }
    }
    printf("\nModified Matrix :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}