//Sparse matrix
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of matrix\n");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the elements in the matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0)
            count++;
        }
    }
    if(count>((m*n)/2)){
        printf("Sparse Matrix\n");
    }
    else{
        printf("Not Sparse Matrix\n");
    }
    return 0;
}