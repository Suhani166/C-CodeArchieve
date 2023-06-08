#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,p,q;
    printf("Enter size of matrix 1\n");
    scanf("%d %d",&m,&n);
    printf("Enter size of matrix 2\n");
    scanf("%d %d",&p,&q);
    int arr1[m][n],arr2[p][q];
    if(n!=p){
        printf("Matrix Multiplication is not possible.\n");
        exit(0);
    }
    else{
        printf("Enter elements in matrix 1\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("Enter elements in matrix 2\n");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                scanf("%d",&arr2[i][j]);
            }
        }
    }
    int c[n][p];
    //multiplying
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+= arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("The product matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}