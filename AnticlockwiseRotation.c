#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n;
     printf("Enter the size of arrays: \n");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter values in the array : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Array\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Rotate matrix 90 degree anticlockwise\n");
    for(i=(m-1);i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}