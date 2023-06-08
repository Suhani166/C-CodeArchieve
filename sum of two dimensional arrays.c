#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of 2-D array\n");
    scanf("%d %d",&m,&n);
    int a[m][n] ,b[m][n], c[m][n]; //Declaration of arrrays
    printf("Enter values in array 1\n"); 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter values in array 2\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Enter values in array 3\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&c[i][j]);
        }
    }
    printf("\nThe sum of the matrices is\n");
    int sum[m][n]; //creating a new array to store the sum 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]= a[i][j]+b[i][j]+c[i][j];
        }
    }
    //printing the resultant array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}