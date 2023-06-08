#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the values: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                flag=1;
                break;
            } 
        }
    }
    if(flag==0){
        printf("Matrix is symmetric\n");
    }
    else{
        printf("Matrix is not symmetric\n");
    }
    return 0;
}